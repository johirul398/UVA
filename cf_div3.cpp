#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,h,n,l;
    cin>>j;
    while(j--)
    {
        vector<int>r,t;
        b=0;
        cin>>a;
        for(n=0;n<a;n++)
        {
            cin>>e;
            r.push_back(e);
             t.push_back(e);
        }
        sort(t.begin(),t.end());
        if(t[0]==t[1])
        {
            b=t[a-1];
        }
        if(t[0]!=t[1])
        {
            b=t[0];
        }
         for(i=0;i<a;i++)
        {

            if(b==r[i])
            {
                break;
            }
        }
        cout<<i+1<<endl;
    }

    return 0;
}

