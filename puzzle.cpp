#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define pob pop_back
#define gcd __gcd
#define lcm (a*b)/gcd(a,b)
#define sf scanf
#define pf printf
#define ssf(a, b) scanf("%lld %lld", &a, &b)
#define sssf(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
int main()
{
    ll n,i;
    while(sf("%lld", &n)==1){
      //cin>>n;
    ll t[n];
    for(i=0; i<n; i++)
        cin>>t[i];
    sort(t, n+t);
    ll a=t[n-1];
    ll m=0;
    for(i=n-2; i>=0; i--)
    {
        m=max(m, t[i]%a);
    }
    cout<<m<<endl;
    }
    return 0;
}
