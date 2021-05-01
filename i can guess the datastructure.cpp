#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    int a=0,b,c,d,e,f,g,h,i,j,k,l,n,o,x=0;
     vector<int>v;
    while(cin>>n)
    {
       stack<int>s;
       queue<int>q;
       priority_queue<int>p;
        a=0,b=0,c=0,k=0,l=0;
        for(i=0,j=0;i<n;i++)
        {
            cin>>g>>f;
            if(g==1)
            {
                s.push(f);
                q.push(f);
                p.push(f);
                l++;
            }
            else
            {
                v.push_back(f);
                if(l>k)
                {

                    if(v[j]==q.front())
                       {
                          a++;
                       }
                    if(v[j]==s.top())
                     {
                        b++;
                      }
                    if(v[j]==p.top())
                     {
                        c++;
                      }
                   q.pop();
                   s.pop();
                   p.pop();
                   j++;

                }
                k++;
            }
        }
        x=v.size();
        if((a==x&&b==x)||(b==x&&c==x)||(a==x&&c==x))
        {
            cout<<"not sure"<<endl;
        }
       else if(a==x)
        {
            cout<<"queue"<<endl;
        }
        else if(b==x)
        {
            cout<<"stack"<<endl;
        }
        else if(c==x)
        {
            cout<<"priority queue"<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
        v.clear();
    }
   return 0;
}
