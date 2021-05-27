#include <bits/stdc++.h>
using namespace std;
int main()
    {
      int i,b,c,x,z,n,j,t,m,l,k,z1;
      string s;
       cin>>z1;
       while(z1--)
       {
          cin>>n>>b;
          cin>>s;
          c=s.size();
          x=0,z=0,t=0,m=0,k=0;
          for(i=0,j=c-1;i<c;i++,j--)
          {
            /*  if(z==1&&x==1)
              {
                  break;
              }*/
            if(s[i]=='*')
            {
                t++;

            }
            if(s[i]=='*'&&x==0)
            {
                x=1;
                m=i;
            }
            if(s[j]=='*'&&z==0)
            {
                z=1;
                k=j;
            }

          }
         // cout<<m<<" "<<k;
         if(t==1)
          {
              cout<<1<<endl;
          }
          else
          {
              int y=k-m;
              if(y<=b)
              {
                   cout<<k-m<<endl;
              }
              else
              {
                   cout<<b<<endl;
              }

         }

       }

       return 0;
    }
