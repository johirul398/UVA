#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,one=0,zero=0,sum=0;
    cin>>l;
    while(l--)
    {
        one=0,zero=0,i=0,sum=0,b=0;
        cin>>a;
        b=a;
        while(1)
        {
            if(a==0&&b==0)
            {
                break;
            }
            if(a>0)
            {
                c=a%2;
                if(c==1)
                {
                    one++;
                }
                a=a/2;
            }
            if(b>0)
            {
                d=b%10;
                if(d==1||d==2||d==4||d==8)
                {
                    zero+=1;
                }
                if(d==3||d==5||d==6||d==9)
                {
                    zero+=2;
                }
                if(d==7)
                {
                    zero+=3;
                }
                b=b/10;

            }
        }

        cout<<one<<" "<<zero<<endl;
    }

    return 0;
}
