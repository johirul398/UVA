#include <iostream>
#include <algorithm>

using namespace std;
bool sagor(string a1,string b1)
{
    string c=a1+b1;
    string l=b1+a1;
    if(c<l)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int  t,a,b,c,d[10],e,f,g=1,h,i,j;
    string s[60];
    while(cin>>t)
    {
        if(t==0)
        {
            break;
        }
        for(i=0;i<t;i++)
        {
            cin>>s[i];
        }
        sort(s,s+t,sagor);
        for(i=0;i<t;i++)
        {
            cout<<s[i];
        }
        cout<<endl;

    }

    return 0;
}
