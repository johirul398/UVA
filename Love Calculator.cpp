#include<bits/stdc++.h>
using namespace std;
int cal(string s2)
{
    int sum=0,d,g=0,j,i;
    d=s2.size();
    for(i=0;i<d;i++)
    {
        if(s2[i]>='a'&&s2[i]<='z')
        {
            sum+=s2[i]-96;
        }
       else if(s2[i]>='A'&&s2[i]<='Z')
        {
           sum+=s2[i]-64;
        }
    }

    //cout<<sum<<endl;
   while (sum >= 10)
    {
       g = 0;

        while (sum)
        {
            g += sum % 10;
            sum /= 10;
        }
        sum = g;
    }
    return sum;
}

int main()
{
   // freopen("k.txt","w",stdout);
    double a,b,e,i,n;
    double t,k;
    string s,s1;
    s="";
    s1="";
    while(getline(cin,s))
    {
        getline(cin,s1);
        a=cal(s);
        b=cal(s1);
       // cout<<a<<" "<<b<<endl;
        if(a<b)
        {
            t=(a*100.0)/b;
            cout<<fixed<<setprecision(2)<<t<<" %"<<endl;
        }
        else
        {
            k=(b*100.0)/a;
            cout<<fixed<<setprecision(2)<<k<<" %"<<endl;
        }
        s="";
        s1="";

    }

    return 0;
}
