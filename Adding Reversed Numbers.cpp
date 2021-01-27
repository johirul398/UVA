#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("k3.txt","w",stdout);
    int a,b=0,c,d,e,f,g,h,i,j,k,l;
    string s1,s2;
    s1="";
    s2="";
    cin>>k;
    while(k--)
    {
        int sum[205]={0};
        a=0;
        cin>>s1;
        cin>>s2;
        f=s1.size();
        g=s2.size();
         a=max(f,g);
        for(i=0;i<f;i++)
        {
          sum[i]+=s1[i]-'0';
        }
        for(i=0;i<g;i++)
        {
          sum[i]+=s2[i]-'0';
        }
    for(i=0;i<=a+1;i++)
    {
       if(sum[i]>=10)
        {
            sum[i+1]+=sum[i]/10;
            sum[i]=sum[i]%10;
        }
    }
    j=a+1;
    while(sum[j]==0&&j>=0)
    {
        j--;
    }
    i=0;
    while(sum[i]==0)
           {
               i++;
           }
    while(i<=j)
    {
        cout<<sum[i];
        i++;
    }
    cout<<endl;
    s1="";
    s2="";
    }

    return 0;
}
