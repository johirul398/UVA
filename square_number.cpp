#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,i,j;
    int k=0;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        {
            break;
        }
       if(a>b)
    {
        swap(a,b);
    }
    for(i=a;i<=b;i++)
    {
        j=sqrt(i);
        if(j==int(j))
        {
          k++;
        }
    }
    cout<<k<<endl;
    k=0;
    }

    return 0;
}
