#include<bits/stdc++.h>
using namespace std;
#define  ma 100000
 int par[ma];
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
    if(a1!=b1)
    {
         par[a1]=b1;
        // cout<<a1<<" "<<b1<<endl;
       // cout<<"friends"<<endl;
    }
   /* else
    {
        par[a1]=b1;

    }*/
}
int main()
{
   // freopen("output.txt","w",stdout);
   int a,b,d,e=0,i,h=0,k,l,m;
   string s,s1,s2,s3;
   char c;
   bool f = false;
   cin>>m;
   while(m--)
   {
       h=0,e=0;
     if(f) cout<<endl;
     cin>>a;
     cin.ignore();
   for(i=1;i<=a;i++)
   {
       makeset(i);
   }
  while(1)
  {
      getline(cin,s);
     if(s.size()==0)
     {
         break;
     }
      stringstream st(s);
      st>>s1>>s2>>s3;

        k=0,l=0;
        stringstream q(s2);
        q>>k;
        stringstream q1(s3);
        q1>>l;
       // sscanf(s.c_str(),"%c %d %d",&c,&k,&l);

      if(s1=="c")
      {
          uunion(k,l);
      }
      else
      {
         // cout<<par[k]<<" "<<par[l]<<endl;
        if(ffind(k)==ffind(l))
        {
            h++;
        }
        else
        {
            e++;
        }
      }
     st.clear();
  }
  cout<<h<<","<<e<<endl;
  s="";

  f=true;
   }

    return 0;
}
