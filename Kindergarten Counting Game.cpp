#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b,c;
  string s,x;
    while(getline(cin,s))
    {
        a=0;
        b=0;
        c=s.size();
        for(int i=0;i<c;i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
               {
                   if(a==0)
                   {
                       b++;
                       a=1;
                   }

               }
               else
               {
                   a=0;
               }
        }
        cout<<b<<endl;
    }
    return 0;
}
