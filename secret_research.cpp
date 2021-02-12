#include <bits/stdc++.h>
using namespace std;

int main()
{
   char s[1000];
   int i,k,l,h,j;
   cin>>j;
   for(i=0;i<j;i++)
   {
   cin>>s;
    k=strlen(s);
   if(strcmp(s,"1")==0||strcmp(s,"4")==0||strcmp(s,"78")==0)
   {
       cout<<"+"<<endl;
   }
    else if(s[k-1]=='5'&&s[k-2]=='3')
       {
           cout<<"-"<<endl;
       }
   else if(s[0]=='9'&&s[k-1]=='4')
       {
           cout<<"*"<<endl;
       }
    else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0')
        {
        cout<<"?"<<endl;
       }
}

    return 0;
}
