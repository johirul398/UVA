#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a=0,s=0,b,c,n,t[10000];
    cin>>n;
    for(int x=0;x<n;x++)
    {
       long long int l=0,m=0,o=0,p=0,q=0,r=0,w=0,f=0,g=0,h=0;
        cin>>j;
        for(i=1;i<=j;i++)
        {
                b=i;
                while(b!=0)
                {
                    c=b%10;
                   // t[a]=c;
                   if(c==0)
                   {
                       m++;
                   }
                   if(c==1)
                   {
                       o++;
                   }
                   if(c==2)
                   {
                       p++;
                   }
                   if(c==3)
                   {
                       q++;
                   }
                   if(c==4)
                   {
                       r++;
                   }
                   if(c==5)
                   {
                       w++;
                   }
                   if(c==6)
                   {
                       f++;
                   }
                   if(c==7)
                   {
                       g++;
                   }
                   if(c==8)
                   {
                       h++;
                   }
                   if(c==9)
                   {
                       l++;
                   }

                    b=b/10;
                    a++;

                }
            }
        cout<<m<<" "<<o<<" "<<p<<" "<<q<<" "<<r<<" "<<w<<" "<<f<<" "<<g<<" "<<h<<" "<<l<<endl;
    }

    return 0;
}
