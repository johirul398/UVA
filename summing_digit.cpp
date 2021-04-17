#include<bits/stdc++.h>
using namespace std;
int re(long long int n)
{
     long long int s,b,m,l,k,i,j,a,c,d,e;
     k=1;
     if(n<10)
     {
         return n;
     }
     //k=1;
     if(k==3)
     {
         return n;
     }
     else
     {
        a=0;
        b=0;
       // c=n;
        while(n!=0)
        {
           a=n%10;
           b=b+a;
           n=n/10;
        }
        k++;
        return re(b);
     }

       // cout<<b;
}
int main()
{
    long long int s,e;
    while(cin>>s)
    {
        if(s==0)
        {
            break;
        }
      e=re(s);
      cout<<e<<endl;
    }
    return 0;
}
