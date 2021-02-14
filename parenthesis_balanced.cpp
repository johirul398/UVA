#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,j,l,m,n,b,c,x;
    cin>>n;
    cin.ignore();
    while(n--)
    {
       string a;
       getline(cin,a);
       k=a.length();
       stack<char>f;
       bool flag=true;
      for(i=0;i<k;i++)
       {
           if(a[i]==32)
           {
               continue;
           }
          if(a[i]=='('||a[i]=='[')
          {
              char p=a[i];
              f.push(p);
          }
          else
          {
              if(f.size()==0)
              {
                  flag=false;
                  break;
              }
             if((a[i]==')'&&f.top()=='(')||(a[i]==']'&&f.top()=='['))
               {
                   f.pop();
               }
            else
             {
                flag=false;
                break;
             }
           }

         // i++;
       }
       if(f.empty()&&flag==true)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
    }
    return 0;
}
