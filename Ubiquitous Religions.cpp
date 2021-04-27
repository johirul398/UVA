#include<bits/stdc++.h>
using namespace std;
#define  ma 100000
int dis;
 int par[ma];
void makeset(int n)
{
    par[n]=n;
    dis = n;
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
         dis--;
    }
}
int main()
{
   // freopen("output.txt","w",stdout);
   int a,b,d,c,e,i,h=0,k,l,m;

   while(cin>>b>>a)
   {
       h++;
      if(a==0&&b==0)
      {
          break;
      }
   for(i=1;i<=b;i++)
   {
       makeset(i);
   }
    for(i=1;i<=a;i++)
   {
      cin>>d>>c;
      uunion(d,c);
   }

   cout<<"Case "<<h<<": "<<dis<<endl;
   dis=0;
   }

    return 0;
}
