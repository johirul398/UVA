#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k=0,l,m,n,a,b,c=0;
    while(cin>>n)
    {
        k=n;
        c=0;
       while(n>=3)
          {
                c=n/3+c;
                n=n/3+n%3;
            }
      if(n==2)
      {
         cout<<c+k+1<<endl;
      }
      else{
        cout<<c+k<<endl;
      }
    }

    return 0;
}
