#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d;
    string s,a,s1,b1;
  // int result[100000];
    while(cin>>s)
    {
        cin>>a;
      int  result[100000]={0};
        b=s.size();
        c=a.size();
        int sum=0,f=0,g=0,d=0,m;
        for(int i=b-1,m=0;i>=0;i--,m++)
        {

            for(int j=c-1,f=m;j>=0;j--,f++)
            {
              g=a[j]-'0';
              d=s[i]-'0';
            // result[f]+=g*d;
            sum=g*d;
           // cout<<"d "<<d<<" g "<<g<<" result "<<result[f]<<endl;
            // if(result[f]>=10)
             //{
                 result[f+1]=sum/10;
                //  result[f]+=result[f]%10;

                  result[f]+=sum%10;
                   cout<<"result [f] "<<result[f]<<endl;
                  if(result[f]>=10)
                  {
                       result[f+1]=result[f]/10;
                       result[f]+=result[f]%10;
                      // cout<<"result [f] "<<result[f]<<endl;
                  }
                // result[f]+=result[f]%10;
                // cout<<result[f]<<endl;
                //cout<<"result[f+1] "<<result[f+1]<<endl;
            // }

           //  cout<<result[f]<<endl;
             // f++;
            //  sum=0;
            }
        }
        for(int i=3;i>=0;i--)
        {
            cout<<result[i];
        }
    }
    return 0;
}
