#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("i.txt","w",stdout);
    int i,k,j,l,m,n,b,c,x[10001],e[10001];
   while(cin>>n)
   {
       l=0;
   for(i=0;i<n;i++)
   {
       cin>>x[i];
   }
   for(i=0;i<n-1;i++)
   {
       if(x[i]<x[i+1])
       {
           e[i]=x[i+1]-x[i];
       }
       else{
         e[i]=x[i]-x[i+1];
       }
    // e[i] =abs(x[i+1]-x[i]);
   }
   sort(e,e+n-1);
      for(j=0;j<n-1;j++)
       {
          // cout<<e[j];
           if(e[j]!=j+1)
           {
               l=1;
           }

       }
       if(l!=1)
        {
        cout<<"Jolly"<<endl;
       }
      else{
          cout<<"Not jolly"<<endl;
         }
   }

    return 0;
}
