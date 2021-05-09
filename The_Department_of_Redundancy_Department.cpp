#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i ,j ,k,l,m,n,a;
    vector<int> sa;
     map<int, int> ta;
    while(cin>>a)
    {
        if(ta.count(a) == 0)
        {
            ta[a] = 1;
            sa.push_back(a);
        }
        else
        {
            ta[a] = ta[a] + 1;
        }
    }
     for(i=0;i<sa.size();i++)
        {
            cout<<sa[i]<<" "<<ta[sa[i]]<<endl;
        }

    return 0;
}
