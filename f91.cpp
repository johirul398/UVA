#include <bits/stdc++.h>
using namespace std;
int re(int n)
{
   if(n>=101)
   {
       return n-10;
   }
   else
   {
     return re(re(n+11));
   }
}

int main()
{
    int i,j,k,l,num,a,b,c,d;
   while(scanf("%d",&a))
   {
       if(a==0)
       {
           break;
       }
       k=re(a);
       cout<<"f91("<<a<<") = "<<k<<endl;
       k=0;

   }
   return 0;
}
