#include<bits/stdc++.h>
#define number 100000
using namespace std;
bool status[number+10];
int prime[32000],add=0;

void seive()
{
    int range,i,j;
    memset(status,1,sizeof(status));


    for(i=2; i*i<=number; i++)
    {
        if(status[i])
        {
            for(j=i+i; j<=number; j=j+i)
                status[j]=0;
        }

    }
    for(i=2; i<=number; i++)
        if(status[i])
            prime[add++]=i;

}
int d_sum(int num)
{
    int sum=0;

    while(num!=0)
    {
        sum=sum+num%10;
        num/=10;
    }

    return sum;
}
int fact_sum(int num)
{
    int i=0,j,sum=0,n=num,range=sqrt(num);

    while(num!=1  && i<=9000)
    {
        if(num%prime[i]==0 && prime[i]<=range)
        {
            sum=sum+d_sum(prime[i]);
            num=num/prime[i];

        }
        else
        i++;

    }

    if(n==num)
    sum=0;
    else if(num>1)
    sum+=d_sum(num);

    return sum;
}

int main()
{
    int u,i,l,k,m,num;
    seive();
    cin>>u;
    while(u--)
    {
        cin>>num;
       m=num;
    for(i=m+1; ;i++)
    {
        l=d_sum(i);
        k=fact_sum(i);
        if(l==k)
        {
            cout<<i<<endl;
            break;
        }
    }
  }
    return 0;
}
