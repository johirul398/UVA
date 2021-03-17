#include<bits/stdc++.h>
using namespace std;
int gcd(unsigned long long int a,unsigned long long int b)
{
   if (a == 0 || b == 0)
      return 0;
   else if (a == b)
      return a;
   else if (a > b)
      return gcd(b,a-b);
   else return gcd(a, b-a);
}
 int main()
{
    //freopen("sa.txt","w",stdout);
   unsigned long long int i,j,x=0,n,b,g=0,count=0,a[90000];
   double c;
   while(cin>>n)
   {
       a[900000];
       if(n==0)
       {
           break;
       }
       count = 0;
       x=(n*(n-1))/2;
       c=0;

       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(i=0;i<n;i++)
       {
           for(j=i+1;j<n;j++)
           {
                g=gcd(a[i],a[j]);
                if(g==1)
                {
                   count++;
                }
           }
       }
      if(count==0)
      {
        printf("No estimate for this data set.\n");
      }
      else
        {
             c=sqrt((6*((double)(x))/((double)(count))));

        printf("%.6lf\n",c);
      }

  }

    return 0;
}
