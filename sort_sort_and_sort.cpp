#include<bits/stdc++.h>
using namespace std;
 long long int m;
/*bool sagor(long long int x,long long int y)
{
   // int h=3;
    if(x%m<y%m)
    {
        return true;
    }
    else
    {
        return false;
    }
}*/
bool sagor1(long long int x,long long int y)
{
    if(x%m<y%m)
    {
        return true;
    }
   else if(x%m==y%m && (x%2!=0 &&y%2==0))
       {
           return true;
       }
     else if((x%m==y%m) && (x%2==0&&y%2==0) && (x<y))
       {
           return true;
       }
    else if((x%m==y%m) && (x%2!=0&&y%2!=0) && (x>y))
       {
           return true;
       }
       else
        {
            return false;
        }
}
int main()
{
   // freopen("input.txt","w",stdout);
  long long int a[10000],b[10000],c,d,e,f,g,h,i,j,k,l,n,s[100005];
  while(cin>>f>>m)
  {
      if(f==0&&m==0)
      {
          break;
      }
   for(i=0;i<f;i++)
   {
       cin>>s[i];
   }
  // sort(s,s+f);
   //sort(s,s+f,sagor);
   sort(s,s+f,sagor1);
   cout<<f<<" "<<m<<endl;
   for(i=0;i<f;i++)
   {
       cout<<s[i]<<endl;
   }
  }
  cout<<0<<" "<<0<<endl;

    return 0;
}
