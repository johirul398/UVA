#include<bits/stdc++.h>
using namespace std;
#define EPS 1e-7
int p,q,r,s,t,u;
double f(double x)
{
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
}
int main()
{
    double a,b,c,d,e,g,h,i,j,k,l,m,n,x;
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        if(p==0&&q==0&&r==0&&s==0&&t==0&&u==0)
        {
            break;
        }
        h=1,l=0;
        if(f(l)*f(h)>0)
        {
            cout<<"No solution"<<endl;
        }
        else
        {
            while(h-l>.0000001)
            {
                x=(h+l)/2;
                if(f(l)*f(x)<=0)
                {
                    h=x;
                }
                else
                {
                    l=x;
                }
            }
              printf("%.4lf\n", x);
        }
    }
    return 0;
}
