#include <bits/stdc++.h>
using namespace std;
int main() {
   // freopen("input.txt","w",stdout);
    int a,b,c,d,e,f,i,j,t,k,l,m,n,x,g;
    string z;
    cin>>g;
    while(g--)
    {
      queue<int>s,le;

      bool flag=0;
        a=0,e=0,k=0,m=0,x=0;
        cin>>l>>n;
        for(i=0;i<n;i++)
        {
            cin>>c>>z;
            if(z=="left")
            {
                 le.push(c);
            }
            else
            {
                s.push(c);
            }

        }
        l=l*100;
        while(!s.empty()||!le.empty())
        {
            e=0;

            if(!flag)
           {
             //  cout<<"sa"<<endl;
           while((e+le.front()<=l)&&(!le.empty()))
           {
               d=le.front();
               m=d;
               e=e+m;
               le.pop();

             }
           }

           else
           {
           while((e+s.front()<=l)&&(!s.empty()))
           {
               // cout<<"sagor"<<endl;
               d=s.front();
               m=d;
               e=e+m;
               s.pop();

           }

            }
            ++k;
            flag=1-flag;

        }
        cout<<k<<endl;


    }


  return 0;
}
