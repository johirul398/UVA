#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10001];
    int i,j,k,l,m,n;

    while(gets(s)&&s!="")
    {
        gets(s);
        if(strcmp(s,"0")==0)
        {
            return 0;
        }
        k=strlen(s);
        i=0;
        m=0;
       while(k > 0)
        {
           m+=(s[i]-'0')*(pow(2,k)-1);
           i++;
           k--;
        }
        cout<<m<<endl;
    }
    return 0;
}
