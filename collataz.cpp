#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("ta.txt","w",stdout);
    long long int i,j,k=0,l=-99999,a,b,c,d,x=0,y,p,t;
    while(cin>>a>>b)
    {
        if(a<0&&b<0)
        {
            break;
        }
        if(a>b)
        {
         t=a;
         a=b;
         b=t;
        }
          c=0;
          y=a;
          while(a<=b)
          {
              c++;
              if(a==1)
              {
                  break;
              }

              if(a%2==0)
              {
                  a=a/2;
              }
              else
              {
                  a=3*a+1;
              }
             // c++;


          }
          cout<<"Case "<<++k<<": A = "<<y<<", limit = "<<b<<", number of terms = "<<c<<endl;
         // k++;

        }

    return 0;
}
