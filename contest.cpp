#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long  int a,b,c,d,e,f,g,i,j,k,l;
    cin>>c;
    while(c--)
    {
        cin>>a>>b;
         if(a==b)
        {
            cout<<0<<endl;
        }
        else if(b==1)
        {
            cout<<-1<<endl;
        }
        else
        {
        if(a<b)
        {
            swap(a,b);
        }
        i=0;
        while(a>=b)
        {
            if(a/2==b)
            {
                a=a/2;
                i++;
                break;
            }
            else if(a/4==b)
            {
                a=a/4;
                i++;
                break;
            }
            else if(a/8==b)
            {
                a=a/8;
                i++;
                break;
            }
            else
            {
                a=a/8;
                i++;
            }
        }
        if(a!=b)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    }
    return 0;
}
