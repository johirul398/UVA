#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("sa.txt","w",stdout);
  unsigned long long int a,b,s,c,d,f=0,g,i,j,k,e[90000],l=1,m,p,h;
  unsigned long long int large=0;
    cin>>c;
    while(c--)
    {
          cin>>a>>b;
        large=0;
        h=0;
      for(j=a;j<=b;j++)
      {
           int cnt = 0;
           for (int i = 1; i <= sqrt(j); i++)
                {
                   if (j % i == 0)
                    {
                       if (j / i == i)
                     {
                       cnt++;
                     }

                    else
                   {
                    cnt = cnt + 2;
                  }
             }
         }
        // e[j]=countDivisors(i);
       // f=countDivisors(i);
       // cout<<f<<endl;
        // l=max(l,e[j]);
        if(cnt>large)
        {
            h=j;
            large=cnt;
           // cout<<h<<" "<<large<<endl;

        }
       // cout<<h<<" "<<large<<endl;
         //j++;

      }
      /*cout<<l;
      /* for(f=0,i=a;i<=b;i++,f++)
      {
          if(e[f]==l)
          {
              break;
          }

      }*/
      cout<<"Between "<<a<<" and "<<b<<", "<<h<<" has a maximum of "<<large<<" divisors."<<endl;
    }

    return 0;
}
