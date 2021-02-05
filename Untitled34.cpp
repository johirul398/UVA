#include<bits/stdc++.h>
using namespace std;
int main()
{

   long long  int a,b,c,d,e,e1,f,f1,g,g1,h,h1,i,j,k,l,m,n,x,y,t,s;
   cin>>c;
   while(c--)
   {
       e=0,f=0,d=0,h=0,i=0,k=0,m=0;
       cin>>a>>b>>x>>y>>n;
       e=a-x;
       e1=b-y;
       //if(e<=n)
       //{
          f=abs(a-e);
          h=abs(n-e);
          f1=abs(b-h);
          i=f1*f;
      // }
       //if(e1<=n)
       //{
          h1=abs(b-e1);
          k=abs(n-e1);
          d=abs(b-k);
          m=h1*d;

       //}
       cout<<min(i,m)<<endl;
   }

    return 0;
}
