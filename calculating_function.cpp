#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b=0,c=0,d,e,i,j;
   while(cin>>a)
   {
       b=0;

        if(a%2==0)
        {
            b=a/2;
        }
        else
            {
            b=(a-1)/2-a;
        }

            cout<<b<<endl;
   }
    return 0;
}
