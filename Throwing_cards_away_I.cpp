#include <bits/stdc++.h>
using namespace std;
int main() {
   // freopen("sagor.txt","w",stdout);
    int a,b=0,c,d,e,f,i,j,cnt;
    queue<int>s;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        for(i=1;i<=a;i++)
        {
           s.push(i) ;
        }
        cout<<"Discarded cards:";
        while(1)
        {
            if(s.size()==1)
            {
                cout<<endl;
                break;
            }
            if(s.size()==2)
            {
                cout<<" "<<s.front();
                s.pop();
            }
            else
            {
                cout<<" "<<s.front()<<",";
                s.pop();
                b=s.front();
                s.pop();
                s.push(b);
            }

        }
        cout<<"Remaining card: "<<s.front()<<endl;
        s.pop();
    }



  return 0;
}
