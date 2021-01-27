#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h,i,k;
    int j=1;
    cin>>k;
    while(k--)
    {
        e=0,f=0,h=0,c=0;
      cin>>a>>b;
      f=(9*a+160)/5;
      f+=b;
      c=(5*f-160)/9;
      cout<<"Case "<<j++<<": "<<fixed<<setprecision(2)<<c<<endl;

    }
    return 0;
}
