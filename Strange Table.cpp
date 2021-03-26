#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long  int a,b,c,d,e,f,g,h,i,j,k;
    cin>>k;
    while(k--)
    {
        cin>>a>>b>>c;
        e=c/a;
        f=c%a;
        if(f)
        {
           e++;
        }
        else
        {
            f=a;
        }
        cout<<(f-1)*b+e<<endl;
    }
    return 0;
}
