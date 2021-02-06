#include<bits/stdc++.h>
using namespace std;
//#define n 1000000
bool prime[9000000+1];
long long int gold[100000],bx=0;
void seive()
{
   //bool prime[n+1];
   //long long int gold[100000],
   long long int j=0;
   memset(prime,true,sizeof(prime));
   prime[0]=prime[1]=false;
   for(unsigned long long int p=2;p<=sqrt(9000000);p++)
   {
       if(prime[p]==true)
       {
           for(unsigned long long int i=p*2;i<=9000000;i+=p)
           {
               prime[i]=false;
           }
       }
   }
  /* for(unsigned long long int  i=2;i<=n;i++)
   {
       if(prime[i])
       {
           gold[j]=i;
           j++;
       }
   }
   /*for(int t=0;t<j;t++)
   {
       cout<<gold[t]<<" ";
   }*/

}
bool isprime(long long int l)
{

    if (l <= 1)  return false;
    if (l <= 3)  return true;


    if (l%2 == 0 || l%3 == 0) return false;

    for (int i=5; i*i<=l; i=i+6)
        if (l%i == 0 || l%(i+2) == 0)
           return false;

    return true;
}
int main()
{
    seive();
     long long int a,s,c,v,b,m,t=0,y,u,q,e,f,i,j;
     bool w;
     while(cin>>b)
     {
        if(b==0)
        {
            break;
        }
        a=b;
        s=0;
        c=0;
        while(a!=0)
        {
            s++;
            a=a/10;
        }
        t=pow(10,s);
       // cout<<s<<endl;
       for(i=b;i<t;i++)
       {

           if(prime[i])
           {
             // cout<<i<<endl;
              // c=i;
               m=0;
               u=0;
               w=0;
                int num = i;
              // cout << num << endl;
               while(1)
               {
                   // cout << num << endl;
                     w=isprime(num);
                      if(w)
                        {
                         u++;

                         }
                    long long int rem = num % 10;
                    long long  int div = num / 10;
                      num = (pow(10, s - 1)) * rem + div;
                     if (num == i)
                     {
                         break;
                     }

                 }
                if(u==s)
                {
                 // cout<<i<<endl;
                  break;
                }
                 // cout<<u<<endl;

           }
       }
     }
    return 0;
}
