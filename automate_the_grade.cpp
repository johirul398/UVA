#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int  t,a,b,c,d[10],e,f,g=1,h,i,j;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>j;
        for(i=0;i<3;i++)
        {
            cin>>d[i];
        }
        sort(d,d+3);
        f=0,e=0,h=0;
        f=d[1]+d[2];
        e=f/2;
        h=a+b+c+e+j;
        if(h>=90)
        {
            cout<<"Case "<<g<<": A"<<endl;
        }
       else if(h>=80&&h<90)
        {
           cout<<"Case "<<g<<": B"<<endl;
        }
       else if(h>=70&&h<80)
        {
            cout<<"Case "<<g<<": C"<<endl;
        }
      else  if(h>=60&&h<70)
        {
            cout<<"Case "<<g<<": D"<<endl;
        }
        else if(h<60)
        {
            cout<<"Case "<<g<<": F"<<endl;
        }
      g++;
    }

    return 0;
}
