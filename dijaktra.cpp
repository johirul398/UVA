#include<iostream>
using namespace std;
int main()
{
    int a[10][10]={},n1,n2,v;
    for(int i=1;i<=10;i++)
    {
        cin>>n1>>n2>>v;
        a[n1][n2]=v;
    }
    int p[10],c[10],x[10];
    int start;
    cout<<"enter my source"<<endl;
    cin>>start;
    for(int i=1;i<=5;i++)
    {
        c[i]=INT_MAX;
        x[i]=0;
        p[i]=0;
    }
    c[start]=0;
    for(int i=1;i<=5;i++)
    {

    {
        int s=INT_MAX,m;
        for(int j=1;j<=5;j++)
        {
            if(x[j]==0)
            {
                if(c[j]<s)
                {
                    s=c[j];
                    m=j;
                }
            }
        }
    x[m]=1;
    for(int j=1;j<=5;j++)
    {
        if(a[m][j]>0)
        {
            if(c[j]>c[m]+a[m][j])
            {
                c[j]=a[m][j]+c[m];
                p[j]=m;
            }
        }
      }
    }
    for(int i=1;i<=5;i++)
    {
        cout<<c[i]<<" ";
       // cout<<endl;
    }
}
    return 0;
}
