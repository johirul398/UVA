#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d,e,f,g,h,i,j,k;
   while(cin>>a>>b>>c)
   {
       if(a==b && b==c)
       {
           cout<<"*"<<endl;
       }
       else if(a==c)
       {
           cout<<"B"<<endl;
       }
       else if(b==c)
       {
           cout<<"A"<<endl;
       }
      else  if(a==b)
       {
           cout<<"C"<<endl;
       }
   }

    return 0;
}
