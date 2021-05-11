#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c=0,d,e=0,f,g,h,i=0,j=0,k=0,l,m,n,o,p=0;
    char s[101],x;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        cin>>s;
       b=strlen(s) ;
       c=b/a;
       n=c;
       k=0;
       for(int y=0;y<a;y++)
       {

       for(i=n-1;i>=k;i--)
       {
           cout<<s[i];
       }

       k=k+c;
       n+=c;

      }
      cout<<endl;
  }
    return 0;
}
