#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
     long long int b,c,d,e,f,g,h,i=0,j,k,x,y;
     char s[2000];
     bool flag = true;
     while(gets(s))
     {

     int a=strlen(s);
      for(i=0;i<a;i++)
      {
          if(s[i]=='\"'&&flag==true)
          {
              cout<<"``";
              flag=false;
          }
          else if(s[i]=='\"'&&flag==false)
          {
            cout<<"''";
            flag=true;
          }
          else
          {
              cout<<s[i];
          }
      }
      cout<<endl;
    }
   // cout<<endl;

    return 0;
}
