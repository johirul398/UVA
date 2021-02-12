#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int x,y,c,d,v;
    cin>>v;
    while(v--)
    {

       cin>>x>>y;
     long long  int m=1e9,j=0,e=0,f=0;
       if(y==1)y++,e=1;
       for(int i=0;i<=100;i++)
       {
         long long  int v=x;
           j=i;
           while(v)
           {
              v/=y;
              j++;
           }
           y++;
           m=min(m,j+e);
       }
       cout<<m<<endl;
    }
    return 0;
}
