#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  num, val = 0, base = 1, rem,j,a,i;
   int d[10001],b=0;
   while(scanf("%ld", &num))
   {
       if(num==0)
       {
           break;
       }
       val=0;
       i=0;
       rem=0;
    while (num != 0)
    {
        rem = num % 2;
        d[i]=rem;
       // cout<<d[i];
        if(rem==1)
        {
            val++;
        }
        num = num / 2 ;
        i++;

    }
    cout<<"The parity of ";
    for(j=i-1;j>=0;j--)
    {
        cout<<d[j];
    }
   cout<<" is "<<val<<" (mod 2)."<<endl;
  // printf("The parity of %ld is \n",val);
 //  printf("%d (mod 2).\n",b);
   }

    return 0;
}
