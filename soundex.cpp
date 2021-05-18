#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,j,k,a,b[1001],f=0;
    string s;
    while(cin>>s)
    {
        i=0;
        l=0;
        k=s.length();
        while(k--)
        {
            if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
            {
                f=0;

                if(s[i+1]=='B'||s[i+1]=='F'||s[i+1]=='P'||s[i+1]=='V')
                 {
                   f=1;
                 }
                 if(f==0)
                 {
                     b[l]=1;
                     l++;
                 }
            }
           else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
            {
                f=0;
                 if(s[i+1]=='C'||s[i+1]=='G'||s[i+1]=='J'||s[i+1]=='K'||s[i+1]=='Q'||s[i+1]=='S'||s[i+1]=='X'||s[i+1]=='Z')
                 {
                 f=1;
                 }
                 if(f==0)
                 {
                      b[l]=2;
                      l++;
                 }


            }
           else  if(s[i]=='D'||s[i]=='T')
            {
                f=0;
               if(s[i+1]=='D'||s[i+1]=='T')
               {
                f=1;
               }
               if(f==0)
              {
                   b[l]=3;
                  l++;
              }
            }
           else  if(s[i]=='L')
            {
                f=0;
              if(s[i+1]=='L')
               {
                 f=1;
                }
                if(f==0)
                {
                   b[l]=4;
                   l++;
                }
            }
           else  if(s[i]=='M'||s[i]=='N')
            {
                f=0;
            if(s[i+1]=='M'||s[i+1]=='N')
            {
                f=1;
            }
            if(f==0)
               {
                b[l]=5;
                l++;
               }
            }
           else  if(s[i]=='R')
            {
                f=0;
            if(s[i+1]=='R')
            {
               f=1;
            }
               if(f==0)
               {
                b[l]=6;
                l++;
               }
            }
            i++;

        }
        for(j=0;j<l;j++)
        {
            cout<<b[j];
        }
        cout<<endl;


    }
    return 0;
}
