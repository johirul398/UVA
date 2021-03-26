#include<iostream>
using namespace std;
int main()
{
    int r[15],p[15],q;
   for(int i=1;i<=10;i++)
   {
       cin>>p[i];
   }
   r[0]=0;
   for(int j=1 ;j<=10;j++)
   {
     q=-99999;
     for(int i=1;i<=j;i++)
     {
         if(p[i]+r[j-i]>q)
         {
           q=p[i]+r[j-i] ;
         }

     }
     r[j]=q;

   }
   for(int i=1;i<=10;i++)
   {
       cout<<r[i];
       cout<<endl;
   }

    return 0;
}
