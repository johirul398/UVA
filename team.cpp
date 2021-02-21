#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k=0,l=0,m=0,p=0,a,b,c,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if((a==1&&b==1&&c==1)||(a==0&&b==1&&c==1)||(a==1&&b==1&&c==0)||(a==1&&b==0&&c==1))
        {
            j++;
        }
      /* if(a==0&&b==1&&c==1)
        {
            k++;
        }
        if(a==1&&b==1&&c==0)
        {
            l++;
        }
        if(a==1&&b==0&&c==1)
        {
            m++;
        }*/

    }
    // p=j+k+l+m;
    cout<<j<<endl;

    return 0;
}
