#include <bits/stdc++.h>
using namespace std;

int main()
    {
       // freopen("ma.txt","w",stdout);
      float i=0,b=0,c=0,x=0,z,n,j,h,d,f,p,s;
       while(cin>>h>>s>>n>>f)
       {
           i=1,b=0,c=0,x=0,j=0;
           if(h==0)
           {
               break;
           }
           c=f/100*s;
           //x=b+s;
          // b=x-n;
          b=0;
          while(1)
           {
             b+=s;
             if(s>0)
             {
                 s-=c;
             }
             if(b>h) break;
             b-=n;
             if(b<0) break;
             i++;
            /* s-=c;
             x=b+s;
             b=x-n;*/
           }
           if(b>0)
           {
               cout<<"success on day "<<i<<endl;
           }
           else
           {
               cout<<"failure on day "<<i<<endl;
           }
       }

       return 0;
    }
