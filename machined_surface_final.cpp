#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,j,l,x;

   while(cin>>b&&b!=0)
   {
    x=0;
    vector<int>t;
    l=20000;
   for(int v=0;v<b;v++)
   {
       char s[100];
       scanf("\n");
      gets(s);
      c=0;
    for(i=0;i<25;i++)
     {
         if(s[i]==' ')
         {
             c++;
         }
     }
     l=min(c,l);
     t.push_back(c);

   }
   for(i=0;i<b;i++)
   {
      x+=t[i]-l;
   }
   cout<<x<<endl;

}
    return 0;
}
