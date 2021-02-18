#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int x,y;
    x=a.length();
    y=b.length();
    int t[x+1][y+1]={},s[x+1][y+1]={};
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            if(a[i-1]==b[j-1])
            {
              t[i][j]=t[i-1][j-1]+1;
              s[i][j]=3;
            }
            else{
                if(t[i][j-1]>t[i-1][j])
                {
                    t[i][j]=t[i][j-1];
                    s[i][j]=2;
                }
                else{
                    t[i][j]=t[i-1][j];
                    s[i][j]=1;
                }
            }
        }
    }
     for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=y; j++)
            cout<<" "<<t[i][j];
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=y; j++)
            cout<<" "<<s[i][j];
        cout<<endl;
    }
    return 0;
}
