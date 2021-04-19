#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int i,j,k,l,num;
   while(scanf("%d",&num)&&num!=0)
   {
      /* if(num==0)
       {
           break;
       }*/
      i=1;
      j=1;
      k=1;
      while(k<num)
      {
          j++,k++;
          if(k==num)
          {
              break;
          }
          while(j>1 && k<num)
          {
              j--;i++,k++;
          }
          if(k==num)
          {
              break;
          }
          i++,k++;
          if(k==num)
          {
              break;
          }
          while(i>1 && k<num)
          {
              i--,j++,k++;
          }
      }
      cout<<"TERM "<<num<<" IS "<<i<<"/"<<j<<endl;

   }

    return 0;
}
