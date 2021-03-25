#include<iostream>
using namespace std;
int main()
{
    int t[20][20]={};
    int v,n1,n2;
    for(int i=1; i<=12; i++)
    {
        cin>>n1>>n2>>v;
        t[n1][n2]=v;
        t[n2][n1]=v;

    }
    int c[20],p[20],x[20];
    for(int i=1; i<=8; i++)
    {
        c[i]=999999;
        p[i]=0;
        x[i]=0;
    }
    int start;
    cout<<"enter your source:  ";
    cin>>start;

    c[start]=0;
    for(int i=1; i<=8; i++)
    {
        int b=9999,m=0;
        for(int j=1; j<=8; j++)
        {
            if(x[j]==0){
             if(c[j]<b)
             {
                 b=c[j];
                 m=j;
             }
            }
        }
        x[m]=1;
        for(int j=1; j<=8; j++)
        {
            if(t[m][j]!=0)
            {
                if(c[j]>t[m][j])
                {
                    c[j]=t[m][j];
                    p[j]=m;
                }
            }
        }
         cout<<p[m]<<" "<<m<<" "<<c[m]<<endl;
    }

  return 0;
}
