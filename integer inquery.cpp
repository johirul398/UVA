#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l;
    int sum[300]={0};
    char s[300];
    string s1;
    s1="";
    while(cin>>s1)
    {
        if(s1=="0")
        {
            break;
        }
        f=s1.size();
        for(i=0,j=f-1;i<f;i++,j--)
        {
          sum[i]+=s1[j]-'0';
        }
    }
    for(i=0;i<200;i++)
    {
        if(sum[i]>=10)
        {
            sum[i+1]+=sum[i]/10;
            sum[i]=sum[i]%10;
        }
    }
    i=200;
    while(sum[i]==0&&i>=0) i--;
    for( ;i>=0;i--)
    {
        cout<<sum[i];
    }
    cout<<endl;

    return 0;
}
