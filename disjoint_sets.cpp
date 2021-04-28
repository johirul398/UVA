#include<bits/stdc++.h>
using namespace std;
 int par[100];
void makeset(int n)
{
    par[n]=n;
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
    if(a1==b1)
    {
        // cout<<a1<<" "<<b1<<endl;
        cout<<"friends"<<endl;
    }
    else
    {
        par[a1]=b1;

    }
}
int main()
{
   int a,b,c,d,e,f,i;
   cin>>a;
   for(i=1;i<=a;i++)
   {
       makeset(i);
   }
  while(cin>>b>>c)
  {
      uunion(b,c);
  }

    return 0;
}
