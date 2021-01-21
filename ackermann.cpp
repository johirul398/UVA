#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("ta.txt","w",stdout);
    long long int i,j,k,l=-99999,a,b,c,d,x=0,y,p=99999,t;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        {
            break;
        }
        if(a>b)
        {
         t=a;
         a=b;
         b=t;
        }
        for(i=a;i<=b;i++)
        {
            c=0;
            y=i;
          while(1)
          {

              if(y%2==0)
              {
                  y=y/2;
              }
              else
              {
                  y=3*y+1;
              }
              c++;
              if(y==1)
              {
                  break;
              }
              //c++;
          }
          if(c>l)
          {
              l=c;
              x=i;

          }

        }
       cout<<"Between "<<a<<" and "<<b<<", "<<x<<" generates the longest sequence of "<<l<<" values."<<endl;
       l=0;
       x=0;

    }
    return 0;
}
