#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l=0,m=0;
    string a;
    //char a[100000000000];
    while(cin>>a)
    {
        j=0;
       // k=a.length();
        for(i=0;i<a.length();i++)
        {

          if(a[i]=='1')
          {
              l++;
              m=0;
          }
       else
          {
              m++;
              l=0;
          }

        if(m==7||l==7)
          {
              j=1;
              break;
        }
    }
    if(j==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
    return 0;
}
