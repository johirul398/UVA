#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,n,c=0,m,i,j,x1,v,a1;
    cin>>v;
    while(v--)
    {
       cin>>s>>n;
       if(s%2!=0) a1=s/2;
       if(s%2==0) a1=s/2-1;
       if(s==1&&n==0)
       {
           cout<<1<<endl;
       }
       else if(n>a1)
       {
           cout<<-1<<endl;
       }
       else
       {
             j=s,x1=1;
           for(i=1;i<=s;i++)
           {
                if(i%2!=0)
                {
                    cout<<x1<<" ";
                    x1++;
                }
                else if(n>=1)
                {
                    cout<<j<<" ";
                    j--;
                    n--;
                }
                else
                {
                    cout<<x1<<" ";
                    x1++;
                }
           }
           cout<<endl;
       }


    }

    return 0;
}

