#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
 int par[mx],can[mx];
 map<string,int>m;
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
   // cout<<a1<<" "<<b1<<endl;
    if(a1!=b1)
    {
         can[b1]+=can[a1];
         cout<<can[b1]<<endl;
            par[a1]=b1;
    }
    else
    {
        cout<<can[a1]<<endl;
    }

}
int main()
{
   // freopen("utput.txt","w",stdout);
   int a,b,e,f,i,j,k,l,n;
   string c,d;
   cin>>n;
   while(n--)
   {
       b=0,j=0,k=0;
   cin>>a;

   while(a--)
   {
       cin>>c>>d;
       if(m.find(c)==m.end())
       {

           j=++b;
            m[c]=j;
          // cout<<"j = "<<j<<endl;
           makeset(j);
       }
        if(m.find(d)==m.end())
       {
           k=++b;
            m[d]=k;
           // cout<<"k = "<<k<<endl;
           makeset(k);
       }
       uunion(m[c],m[d]);
   }
    m.clear();
   }

    return 0;
}
