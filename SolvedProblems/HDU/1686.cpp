#include <bits/stdc++.h>

using namespace std;

/*
 *
 * FUNCTION: 求一个串在另一个串的所有匹配位置
 *
 * TIME COMPLEXITY: O(N + M)
 *
 * setvalue() -- 参数：模式串+文本串 返回值: void
 * find_substring() -- 参数: void 返回值: 所有匹配点的首字符下标
 *
 * P.S. 直接使用cin cout时, 流加速防止tle
 */

class Kmp
{
private:
	string pattern, text;

public:
	void setvalue(string a, string b)
	{
		pattern = a, text = b;
	}

	vector<int> find_substring()
	{
		int n = pattern.size();
		vector<int> nxt(n + 1,0);
		for(int i = 1; i < n; i++)
		{
			int j = i;
			while(j > 0)
			{
				j = nxt[j];
				if(pattern[j] == pattern[i])
				{
					nxt[i + 1] = j + 1;
					break;
				}
			}
		}
		vector<int> pos;
		int m = text.size();
		for(int i = 0, j = 0; i < m; ++i)
		{
			if(j < n && text[i] == pattern[j])
				j++;
			else
			{
				while(j > 0)
				{
					j = nxt[j];
					if(text[i] == pattern[j])
					{
						j++;
						break;
					}
				}
			}
			if(j == n)
				pos.push_back(i - n + 1);
		}
		return pos;
	}
};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	cin >> T;
	while(T--)
	{
		string a, b;
		cin >> a >> b;
		Kmp kmp;
		kmp.setvalue(a, b);
		cout << kmp.find_substring().size() << endl;
	}
	return 0;
}