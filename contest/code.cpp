/*
Solved by $%U%$
on $%D%$/$%M%$/$%Y%$  $%h%$:$%m%$ 
*/
 
// ░░░░░░░▄▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▄░░░░░░
// ░░░░░░█░░▄▀▀▀▀▀▀▀▀▀▀▀▀▀▄░░█░░░░░
// ░░░░░░█░█░▀░░░░░▀░░▀░░░░█░█░░░░░
// ░░░░░░█░█░░░░░░░░▄▀▀▄░▀░█░█▄▀▀▄░
// █▀▀█▄░█░█░░▀░░░░░█░░░▀▄▄█▄▀░░░█░
// ▀▄▄░▀██░█▄░▀░░░▄▄▀░░░░░░░░░░░░▀▄
// ░░▀█▄▄█░█░░░░▄░░█░░░▄█░░░▄░▄█░░█
// ░░░░░▀█░▀▄▀░░░░░█░██░▄░░▄░░▄░███
// ░░░░░▄█▄░░▀▀▀▀▀▀▀▀▄░░▀▀▀▀▀▀▀░▄▀░
// ░░░░█░░▄█▀█▀▀█▀▀▀▀▀▀█▀▀█▀█▀▀█░░░
// ░░░░▀▀▀▀░░▀▀▀░░░░░░░░▀▀▀░░▀▀░░░░
#include <bits/stdc++.h>
using namespace std;
#define int         long long
#define float       long double
#define pb          push_back
#define ld          long double
#define f(i,a,b)    for(int i=a;i<b;i++)
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define vpii         vector<pair<int,int> >
#define mii         map<int,int>
#define all(a)      (a).begin(),(a).end()
#define debug(x)    cout<<#x<<" is "<<(x)<<endl;cout.flush();
//#define debug(x)    ;
#define mp          make_pair
#define x           first
#define y           second
#define pb          push_back
#define endl        '\n'
#define si(x)       (int)((x).size())
#define IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define txt         freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define elasped_time 1.0 * clock() / CLOCKS_PER_SEC
#define tree        vector<vector<int> >
#define PI          3.14159265358979323846
int inf=99999999999;
const int mod=1e9+7;
const int cmp=1e17;
inline int gcd(int a, int b) {
  while (a > 0 && b > 0) {
    if (a > b) a %= b;
    else b %= a;
  }
  return a + b;
}
int add(int x, int y)
{
    x += y;
    while(x >= mod) x -= mod;
    while(x < 0) x += mod;
    return x;
}

int mul(int x, int y)
{
    return (x * 1ll * y) % mod;
}

int binpow(int x, int y)
{
    int ans = 1;
    while(y > 0)
    {
        if(y % 2 == 1)
            ans = mul(ans, x);
        x = mul(x, x);
        y /= 2;
    }
    return ans;
}

int divide(int x, int y)
{
    return mul(x, binpow(y, mod-2));
}
void inp(int n,int arr[])
{
    f(i,0,n) cin>>arr[i];
}
void solve()
{

        
}
main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    solve();
  

}








