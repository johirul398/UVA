#include<bits/stdc++.h>
using namespace std;
int main()
{
   int l,s,d,n,a,b[90000],sum,v=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        l=0;
        sum=0;
        s=0;
        v=0;
       cin>>a;
       for(int j=0;j<a;j++)
       {
          cin>>b[j];
          sum=sum+b[j];
       }
       s=sum/a;
       for(int m=0;m<a;m++)
       {
           if(b[m]>s)
           {
               l++;
           }
       }
       float ans = (float)100/a;
       printf("%.3f%%\n",ans*l);
      // k=0;
       //cout<<round(k)<<endl;
    }
    return 0;
}
