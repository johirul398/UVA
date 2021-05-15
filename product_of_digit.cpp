#include <bits/stdc++.h>
using namespace std;
void primeFactors( long long int n)
{
    long long int a=1,v,b=0,c=0,d[100000],i;
    c=n;
    while (n % 2 == 0)
    {
       // cout << 2 << " ";
       d[b]=2;
       b++;
       a=a*2;
        n = n/2;
    }
   // cout<<a;


    for (i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
           // cout << i << " ";
            d[b]=i;
            b++;
           a=a*i;
            n = n/i;
        }

    }

       if(n>1)
       {
           // cout << n << " ";
            d[b]=n;
            b++;
           a=a*n;

       }
        if(c==0)
       {
           cout<<1<<endl;
       }
      else if(c==1)
       {
           cout<<1<<endl;
       }
       else if(a==c)
       {
           for(i=0;i<b;i++)
           {
               cout<<d[i];
           }
           cout<<endl;
       }
       else
       {
           cout<<"-1"<<endl;
       }
}

/* Driver code */
int main()
{
    long long int n,x;
    cin>>x;
    while(x--)
   {
       cin>>n;
       primeFactors(n);
   }
    return 0;
}
