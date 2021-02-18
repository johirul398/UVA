#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,s,d,f,m,l,k,p,v,q;
    cin>>a>>b>>c;
    n=a+b*c;
    s=a*(b+c);
    d=a*b*c;
    f=(a+b)*c;
    q=a+b+c;
   if(a==1&&b==1&&c==1)
    {
        v=3;
        cout<<v<<endl;
    }
    else if(n>=s&&n>=d&&n>=f&&n>=q)
    {
        cout<<n<<endl;
    }
    else if(d>=n&&d>=s&&d>=f&&d>=q)
    {
        cout<<d<<endl;
    }
    else if(s>=n&&s>=d&&s>=f&&s>=q)
    {
        cout<<s<<endl;
    }
    else if(f>=n&&f>=d&&f>=s&&f>=q)
    {
        cout<<f<<endl;
    }

    else if(q>=n&&q>=d&&q>=s&&q>=f)
    {
        cout<<q<<endl;
    }



    return 0;
}
