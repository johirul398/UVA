#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
 int par[mx],can[mx],sum[mx],id[mx];
 map<string,int>m;
void makeset(int n)
{
    par[n]=n;
    can[n]=1;
    sum[n]=n;
    id[n]=n;
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
         can[b1]+=can[a1];
            par[a1]=b1;
            sum[b1]+=sum[a1];
            sum[a1]=0;
            can[a1]=0;
    }

}
int main()
{
    freopen("tput.txt","w",stdout);
   int a=0,b,e,f,i,j,k,l,n,x,z;
   string s,s1,s2,s3,s4;

   while(cin>>x>>z)
   {
      cin.ignore();
    for(i=1;i<=x;i++)
    {
        makeset(i);
    }
   while(z--)
   {
      // cin.ignore();
       a=0;
       getline(cin,s);
      stringstream ss(s);
      if(s[0]=='1')
      {
          int x1,x2,x3;
          ss>>x1>>x2>>x3;
           uunion(id[x2],id[x3]);
      }
      if(s[0]=='2')
      {
          int x1,x2,x3,e1,d1,f1;
          ss>>x1>>x2>>x3;;
          int aa=ffind(x2);
          int bb=ffind(id[x3]);
          if(aa!=bb)
          {
          id[x2]=++x;
          par[x]=bb;
          can[bb]++;
          can[aa]--;
          sum[bb]+=x2;
          sum[aa]-=x2;

          }
      }
     if(s[0]=='3')
     {
         int h1,h2,h3;
         ss>>h2>>h3;
         h1=ffind(id[h3]);
         cout<<can[h1]<<" "<<sum[h1]<<endl;
     }
     ss.clear();

   }

   }

    return 0;
}
