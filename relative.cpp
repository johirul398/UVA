#include <bits/stdc++.h>
using namespace std;
void primeFactors(long long int  n)
{
   float result = n,a=1,b,c=0,d,e,f;
    while(n%2==0)
    {
        c=1;
        n=n/2;
    }
     if(c==1)
     {
        a*=(1.0-1.0/2);
     }
    for (int p = 3; p * p <= n; ++p) {

        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
        }
         a*= (1.0 - (1.0 / (float)p));
    }

    if (n > 1)
        a*= (1.0 - (1.0 / (float)n));

   cout<<(int)(a*result)<<endl;
}

int main()
{
   //freopen("sa.txt","w",stdout);
    long long int  n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
             primeFactors(n);
        }
    }

    return 0;
}
