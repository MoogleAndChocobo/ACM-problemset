//~ #define LOCAL

#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<sstream>
#include<cmath>
#include<cctype>
#include<queue>
#include<set>
#include<vector>
#include<map>
#include<iostream>
#include<ctime>
#include<list>
#include<functional>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

const int MAX = 1e3 + 10;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;

#define rep(i, a, b) for(int i = a; i <= b; i++)
#define dow(i, a, b) for(int i = a; i >= b; i--)
#define mem(a) memset(a, 0, sizeof(a))

int main()
{

#ifdef LOCAL
	freopen("in.txt", "r", stdin);
#endif	//LOCAL

	//ios::sync_with_stdio(false);
	//cin.tie(0);

	int a, b;
	while(cin >> a >> b)
	{
		printf("%d\n", a + b);
	}
	return 0;
}