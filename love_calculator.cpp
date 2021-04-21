#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("a.txt","w",stdout);
    int i,j,a,b,c,d,e,f,g,x=1,p,h,w,k;
   string s;
    while(cin>>s)
    {
       cin>>d;
       cout<<"Case "<<x<<":"<<endl;
       for(i=1;i<=d;i++)
       {
           cin>>a>>b;
           c=min(a,b);
           e=max(a,b);
           int po=0;
          for(int m=c;m<e;m++)
          {
           if(s[m]==s[m+1])
           {
              continue;
           }
           else{
            po=1;
            break;
           }
          }
          if(po==0)
           {
               cout<<"Yes"<<endl;
           }
           else{
            cout<<"No"<<endl;
           }
       }
       x++;
    }

    return 0;
}
