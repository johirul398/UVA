#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    string s,x;
   char ch;
    while(cin>>s)
    {
        a=s.size();
        for(i=0;i<a;i++)
        {
              ch=int(s[i])-7;
              cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}
