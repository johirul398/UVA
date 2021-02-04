#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,b,c,d=0,x=0,t[10000],i,j,k=0,l=99999;
   string s;
   while(cin>>b)
   {
       if(b==0)
       {
           break;
       }
       d=b,k=0;
   for(int v=0;v<b+1;v++)
   {
    getline(cin,s);
    i=0,c=0;
    a=s.length();
     while(a--)
     {
         if(s[i]==' ')
         {
             c++;
         }
         i++;
     }
     t[k++]=c;
     if(c<l)
     {
         l=c;
     }
    // cout<<c<<endl;
   }
   if(d==1)
     {
      cout<<0<<endl;
     }
     else
     {
       x=0;
   for(i=0;i<k;i++)
   {
      x+=t[i]-l;
   }
   cout<<x<<endl;
     }
}
    return 0;
}
