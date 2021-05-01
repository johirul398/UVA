#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
   long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p=1,x;
    string s1,s3,s4,s5;
  long long int s[200][200];
   cin>>x;
   cin.ignore();
   while(x--)
   {
       b=0,c=0,d=0,e=0,k=0;
       getline(cin,s1);
       stringstream s2(s1);
       s2>>s3>>s4>>s5;
       stringstream in(s5);
      in>>n;

       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>s[i][j];

           }
       }
       k=n/2+1;
        for(i=0,b=n-1;i<k;i++,b--)
       {
           for(j=0,c=n-1;j<n;j++,c--)
           {
               if(s[i][j]<0||s[b][c]<0)
               {
                   d=1;
                   break;
               }
              if(s[i][j]!=s[b][c])
              {
                  d=1;
                  break;
              }

           }
           if(d==1)
           {
               break;
           }
       }
      if(d==0)
      {
          cout<<"Test #"<<p<<": Symmetric."<<endl;
      }
      else
      {
         cout<<"Test #"<<p<<": Non-symmetric."<<endl;
      }
      p++;
       s2.clear();
       in.clear();
        cin.ignore();
   }
    return 0;
}
