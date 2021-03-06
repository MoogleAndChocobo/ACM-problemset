#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<queue>
#include<iostream>
#include<vector>
#include<sstream>
#include<map>
#include<set>
#include<cmath>
#include<cctype>
#include<functional>
#include<ctime>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LF;
typedef unsigned U;

const int dirnd[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
const int dirrd[6][3] = {{0,0,1},{0,0,-1},{1,0,0},{-1,0,0},{0,1,0},{0,-1,0}};
const int MAX = 1e3 + 3;
const int N = 65535;
const int INF = 0x3f3f3f3f;
const LL LINF = 0x3f3f3f3f3f3f3f;
const int MOD = 1e9 + 7;

#define sfi(a) scanf("%d", &a)
#define sfl(a) scanf("%lld", &a)
#define sfu(a) scanf("%llu", &a)
#define sfd(a) scanf("%lf", &a)
#define sfs(a) scanf("%s", a)
#define rep(i, a, b) for(int i = a; i <= b; i++)
#define dow(i, a, b) for(int i = a; i >= b; i--)
#define mem(a) memset(a, 0, sizeof(a))
#define mst(a, b) memset(a, b, sizeof(a))
#define pb(a) push_back(a)

int gcd(int m, int n)
{
    if(m < n)
        swap(m, n);
    while(n)
    {
        int tmp = m % n;
        m = n;
        n = tmp;
    }
    return m;
}

int main()
{

#ifdef LOCAL
    //~ freopen("in.txt", "r", stdin);
#endif    //LOCAL

    int m, n;
    while(~scanf("%d%d", &m, &n))
    {
        if(gcd(m, n) == 1)
            printf("%10d%10d    Good Choice\n\n", m, n);
        else
            printf("%10d%10d    Bad Choice\n\n", m, n);
    }
    return 0;
}