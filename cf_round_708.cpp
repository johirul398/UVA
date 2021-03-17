#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,t,i;
    cin>>f;
    while(f--)
    {
         vector<int>v1,s1;
        cin>>b;
        for( i=0;i<b;i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        sort(v1.begin(),v1.end());
        for( i=0;i<b-1;i++)
        {
           if(v1[i]==v1[i+1])
           {
               s1.push_back(v1[i]);
           }
           else
           {
               cout<<v1[i]<<" ";
           }

        }
        cout<<v1[b-1];
        t=s1.size();
        for( i=0;i<t;i++)
        {
            cout<<" "<<s1[i];
        }
        cout<<endl;
    }
    return 0;
}
