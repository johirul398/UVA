#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,k=1,l,n,f=0;
   string x,s;
    while(getline(cin,s))
    {
        f=0;
        n=s.size();
        stringstream ss(s);
        for(i=0;i<n;i++)
        {
           if(s[i]==' ')
           {
               cout<<" ";
               f=0;
           }
         else  if(s[i]!=' ')
           {
               if(f==0)
               {
                    ss>>x;
                    reverse(x.begin(),x.end());
                    cout<<x;
                    f=1;
               }
           }

        }
       cout<<endl;
         x="";
         ss.clear();
         s="";

    }

    return 0;
}
