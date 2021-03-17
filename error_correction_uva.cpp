#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,x;
   int s[500][500];
   while(cin>>n)
   {
       if(n==0)
       {
           break;
       }
       a=0,b=0,c=0,d=0,e=0,f=0,l=0,k=0,x=0;
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>s[i][j];
               if(s[i][j]==1)
               {
                   a++;
               }
           }
           if(a%2==0)
           {
               b++;
           }
           else
           {
               f++;
               k=i;
           }
           a=0;
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               if(s[j][i]==1)
               {
                   c++;
               }
           }
           if(c%2==0)
           {
               d++;
           }
           else
           {
               l++;
             e=i;
           }
           c=0;
       }
      // x=abs(b-d);
       if((b==d)&&(l==0&&f==0))
       {
           cout<<"OK"<<endl;
       }
       else if(l==1||f==1)
       {
           cout<<"Change bit ("<<k+1<<","<<e+1<<")"<<endl;
       }
       else
       {
           cout<<"Corrupt"<<endl;
       }

   }
    return 0;
}
