#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,a,b,j,k,l,m,s;
   cin>>n;
   while(n--)
   {
       cin>>a;
       j=0;
       m=1;
       s=0;
       k=1;
       l=0;
       while(m<=a)
       {
         m+=m%a;
         s++;
         k++;
         m++;
       }
       cout<<s<<endl;
   }
    return 0;
}
