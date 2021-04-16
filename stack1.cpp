#include<bits/stdc++.h>
using namespace std;
int sagor(string ch)
{
     int i,j,k,l,m,n,b,top=-1;
      char s[130];
       k=ch.length();
        if(ch=="")
            {
                return 1;
            }
        if(ch!="")
        {
            for(j=0;j<k;j++)
            {
            if(ch[j]=='('||ch[j]=='[')
            {
                top++;
                s[top]=ch[j];
                //cout<<s[top]<<endl;
            }
            else
            {
                if(top==-1)
                {
                    //cout<<"sagor"<<endl;
                    return 0;
                }
                if(ch[j]==')'&&s[top]!='(')
                {
                 // cout<<"sagor1"<<endl;
                  return 0;
                }
                 if(ch[j]==']'&&s[top]!='[')
                {
                 // cout<<"sagor2"<<endl;
                  return 0;
                }
                ch[j]=s[top];
                top--;
                // cout<<top<<endl;

            }
        }

    }
        if(top==-1)
            {
                // cout<<"sagor3"<<endl;
                return 1;
            }
        else
            {
                 //cout<<"sagor4"<<endl;
                    return 0;
            }
    }
 int main()
 {
     freopen("sagordr","w",stdin);
      int i,j,k,l,m,n,b,top=-1;
     char s[130];
  // char c[130];
    string c;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>c;
      m=sagor(c);
      if(m==1)
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
