#include <bits/stdc++.h>
using namespace std;
int  primeFactors(long long int  n)
{
   double result = n;
    for (int p = 2; p * p <= n; ++p) {

        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (double)p));
        }
    }

    if (n > 1)
        result *= (1.0 - (1.0 / (double)n));

   return (int)result;
}

int main()
{
   // freopen("sa.txt","w",stdout);
    long long int  n,a=0;
    while(cin>>n && n)
    {
        if(n==0)
        {
            break;
        }
        if(n==1)
        {
            cout<<"0"<<endl;
        }
       else
        {
            a=primeFactors(n);
            cout<<a<<endl;
        }
    }

    return 0;
}
