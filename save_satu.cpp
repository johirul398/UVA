#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string s1("donate");
    long long int s,b,n,m,k=0,l,i,j;
    cin>>s;
    for(i=0;i<s;i++)
    {
        cin>>a;
        if((a.compare(s1)) == 0)
        {
            cin>>b;
            k=k+b;
            //cout<<k<<endl;
        }
        else if(a =="report")
        {
           cout<<k<<endl;
        }
    }
    return 0;
}
