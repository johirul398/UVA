#include<bits/stdc++.h>
using namespace std;
#define n 1000000
bool prime[1000001];
int gold[10000];
void seive()
{
   memset(prime,true,sizeof(prime));
  prime[0]= prime[1]=false;
   for(long long int p=2;p<=sqrt(n);p++)
   {
       if(prime[p]==true)
       {
           for(long long int i=p*2;i<=n;i+=p)
           {
               prime[i]=false;
           }
       }
   }
}
 int primeFactors( int z)
{
   int a=0,v,a1=0,a2,x1=1,x2=-1;
       if(z==1)
       {
           return 1;
       }
       else
       {
           while (z % 2 == 0)
    {
        gold[a++]=2;
        z = z/2;
    }


    for (int i = 3; i <= sqrt(z); i = i + 2)
    {
        while (z % i == 0)
        {
            gold[a++]=i;
            z = z/i;
        }

    }

       if(z>1)
       {
            //cout << z << " ";
            gold[a++]=z;

       }
       for(int i=0;i<a-1;i++)
       {
           if(gold[i]==gold[i+1])
           {
               a1=1;
               break;
           }
       }
       if(a1==1)
       {
           return 0;
       }
       else if (a1==0 && a%2==0){
        return x1;
       }
       else if(a1==0 && a%2!=0)
       {
           return x2;
       }
    }

}

int main()
{
    seive();
     long long int a,c,x,b,d,e,f,g,h,i,m,l,k,s;
    while(cin>>a)
    {
        c=0,x=0,f=0,g=0,h=0,l=0,k=0;
        if(a==0)
        {
            break;
        }
        for(i=1;i<=a;i++)
        {
            if(prime[i])
            {

              c++;
            }
            else
            {
                x=primeFactors(i);
                if(x==1)
                {
                   g++;
                }
                if(x==-1)
                {
                    f++;
                }
            }
        }
       h=primeFactors(a);
       l=c+f;
       k=(-l)+g;
          cout<<a<<"        "<<h<<"        "<<k<<endl;
    }

    return 0;
}
