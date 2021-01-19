#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d,e,f,i,j,t,k,l,m,n,x,g;
    string z;
    priority_queue<int,vector<int>,greater<int> >s;
    bool flag=true;

    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        a=0,b=0,m=0,f=0,d=0;
        for(i=0;i<n;i++)
        {
            cin>>c;
            s.push(c);
        }
         while(s.size()!=1)
         {
             a=0,b=0;
             a=s.top();
             s.pop();
             b=s.top();
             s.pop();
             //d=s.top();
             m=a+b;
             f=f+m;
             s.push(m);

            // cout<<m<<endl;
         }
         cout<<f<<endl;
         s.pop();

    }

  return 0;
}
