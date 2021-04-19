#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,j,k,u,v,s,a,t,l,m=1,n;
    while(1)
    {

        cin>>n;
        if(n==0)
        {
            break;
        }
        if(n==1)
        {
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=(u*t)+(.5*a*t*t);
            cout<<"Case "<<m<<": ";
            printf("%.3lf %.3lf\n",s,a);


        }
        if(n==2)
        {
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=(u*t)+(.5*a*t*t);
            cout<<"Case "<<m<<": ";
            printf("%.3lf %.3lf\n",s,t);


        }
         if(n==3)
        {
            cin>>u>>a>>s;
           v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            cout<<"Case "<<m<<": ";
            printf("%.3lf %.3lf\n",v,t);


        }
         if(n==4)
        {
            cin>>v>>a>>s;
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            cout<<"Case "<<m<<": ";
           printf("%.3lf %.3lf\n",u,t);

        }
        m++;

    }
    return 0;
}
