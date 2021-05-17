#include<bits/stdc++.h>
using namespace std;
int main()
{
   //freopen("sag.txt","w",stdout);
    int i,j,k,l,m,n,b,v,c,a,s,x,f,e,t,d;
    //cin>>t;
    while(cin>>a>>b>>c>>d)
    {
        i=0;
        j=0;
        k=0;
        e=0;
        if(a==0&&b==0&&c==0&&d==0)
        {
            break;
        }
        if(a<b)
        {

             i=40-b-a;
        }
        else
        {
           i=a-b;
        }
        if(b>c)
        {

             j=40-(b-c);
        }
        else
        {
           j=c-b;
        }
        if(c<d)
        {
            k=40-(d-c);
        }
        else
        {
             k=(c-d);

        }
        cout<<1080+(i+j+k)*9<<endl;

    }
    return 0;
}
