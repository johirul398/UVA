#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,n,k=0,p=0,s=0,a,i,m,b,x,j;
    while((scanf("%lld%lld",&a,&b))==2)
    {
        if(a==0&&b==0)
        {
            break;
        }
        else
        {
        s=0;
        p=0;
       while(a||b)
       {
        if(a==0&&b==0)
        {
            break;
        }

           k=(a%10)+(b%10)+s;
           if(k>=10)
           {
               p++;
               s=1;
           }
           else
           {
               s=0;
           }
           a=a/10;
           b=b/10;
       }
     if(p>1)
     {
       cout<<p<<" "<<"carry operations."<<endl;
     }
     else if(p==1)
     {
       cout<<"1 carry operation."<<endl;
     }
     else
     {
       cout<<"No carry operation."<<endl;
     }
    }
}

    return 0;
}
