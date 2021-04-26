#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
 int par[mx],can[mx],q=1;
void makeset(int n)
{
    par[n]=n;
    can[n]=1;
}
int ffind(int r)
{
    if(par[r]!=r)
    {
        par[r]=ffind(par[r]);
    }
    return par[r];
}
void uunion(int x,int y)
{
    int a1=ffind(x);
    int b1=ffind(y);
    if(a1!=b1)
    {
         par[a1]=b1;
         can[b1]+=can[a1];
         q=max(q,can[b1]);

    }

}
int main()
{
    //freopen("output.txt","w",stdout);
   int a,b,c,d,e,f,i,j,k,l,m,n;
   cin>>n;
   while(n--)
   {
   cin>>a>>b;
   for(i=1;i<=a;i++)
   {
       makeset(i);
   }
   for(i=0;i<b;i++)
   {
       cin>>c>>d;
       uunion(c,d);
   }
   cout<<q<<endl;
   q=1;

   }

    return 0;
}
