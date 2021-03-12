#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,a,c,b[100],p=0,sum=0,large=-99999,l,m;
    cin>>a;
    for(i=1;i<=a;i++)
    {
       if(a%i==0){
            sum=0;
            c=i;
        while(c!=0)
        {
            n=c%10;
            sum=sum+n;
            c=c/10;

        }
       if(large<sum)
       {
           large=sum;
           l=i;

       }
       if(large==sum)
       {
           l=min(i,l);
       }
       }

    }

    cout<<l<<endl;
    return 0;
}
