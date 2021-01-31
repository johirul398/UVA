#include <bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    int i,j,k,l,a,b,c,d,e,f,g,h,n,m,o,p,q,r,t,s,x,z,v;
     multiset<int ,greater<int> > green,blue,gr,bl;
     multiset<int,greater<int> >::iterator lo,hi;
    bool flag=true;
    cin>>o;
    while(o--)
    {
        cin>>a>>g>>b;
        for(i=0;i<g;i++)
        {
            cin>>c;
            green.insert(c);
        }
         for(i=0;i<b;i++)
        {
            cin>>c;
            blue.insert(c);
        }
        while(1)
        {
            q=green.size();
            r=blue.size();

            if(green.size()==0||blue.size()==0)
            {

                break;
            }

           for(j=1;j<=a;j++)
           {
              hi=green.begin();
              lo=blue.begin();

              if(*hi>*lo)
              {
                  n=*hi-*lo;
                  gr.insert(n);
                  //flag=true;
                  //s++;
                  green.erase(hi);
                  blue.erase(lo);
              }
              else if(*hi<*lo)
              {
                  m=*lo-*hi;
                  bl.insert(m);
                 // flag=true;
                  //x++;
                  green.erase(hi);
                  blue.erase(lo);
              }
              else if(*hi==*lo)
              {
                 // flag=false;
                   green.erase(hi);
                  blue.erase(lo);
              }
              if(green.size()==0||blue.size()==0)
              {
                  break;
              }

           }
           multiset<int>::iterator it,y;
            for ( it=bl.begin() ; it!=bl.end() ; it++)
            {
                blue.insert(*it);
            }
            for ( y=gr.begin() ; y!=gr.end() ; y++)
            {
                green.insert(*y);
            }
           gr.clear();
           bl.clear();

         }
        multiset<int,greater<int> >::iterator sa;
        if(blue.size()==0 && green.size()==0)
        {
          cout<<"green and blue died"<<endl;
         }
       else if(green.size()>0)
        {
            cout<<"green wins"<<endl;;
        for(sa=green.begin();sa!=green.end();sa++)
        {
            cout<<*sa<<endl;
        }
        }
       else  if(blue.size()>0)
        {
            cout<<"blue wins"<<endl;;
        for(sa=blue.begin();sa!=blue.end();sa++)
        {
            cout<<*sa<<endl;
        }

        }
        if(o)
        {
            cout<<endl;
        }
        green.clear();
        blue.clear();
    }

   return 0;
}
