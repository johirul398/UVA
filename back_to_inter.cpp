#include<bits/stdc++.h>
using namespace std;
int main()
{
  // freopen("sa.txt","w",stdout);
    double u,v,d;
    int n,i=1;
    cin>>n;

    while(n--)
    {
      cin>>d>>v>>u;
      double t1=d/u;
      double  t2=d/sqrt(u*u-v*v);
        if(v>=u||t1==t2)
        {
             printf("Case %d: can't determine\n",i++);
             continue;
        }
       printf("Case %d: %.3lf\n",i++, t2-t1);

    }
    return 0;
}
