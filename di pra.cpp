#include<iostream>
using namespace std;
int main()
{
    int s[15][15]={},n1,n2,v;
    for(int i=1;i<=10;i++)
    {
        cin>>n1>>n2>>v;
        s[n1][n2]=v;
    }
   int p[10],c[10],x[10],start;
    cout<<"enter the source:";
    cin>>start;
    for(int i=1;i<=5;i++)
    {
        c[i]=INT_MAX;
        p[i]=0;
        x[i]=0;
    }
    c[start]=0;
    for(int i=1;i<=5;i++)
    {
      int k=INT_MAX,m;
      for(int j=1;j<=5;j++)
    {
       if(x[j]==0)
       {
           if(c[j]<k)
           {
               k=c[j];
               m=j;
           }
       }
    }
    x[m] =1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
          if(s[m][j]>0)
          {
              if(c[j]>c[m]+s[m][j])
              {
                  c[j]=c[m]+s[m][j];
                  p[j]=m;
              }
          }
        }
    }
}
 for(int i=1;i<=5;i++)
    {
      cout<<c[i]<< " "<<endl;
    }
}
