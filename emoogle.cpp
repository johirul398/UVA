#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,i,n,m,k=1;
    while(cin>>n && n!=0)
    {
        b=0;
        c=0;
        m=0;
        for(i=1;i<=n;i++)
        {
          cin>>a;
        if(a==0)
        {
           b++;
        }
        else
        {
             c++;
        }
    }
    m=c-b;

    cout<<"Case "<<k++<<": "<<m<<endl;
 }


    return 0;
}

