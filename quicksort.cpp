#include<iostream>
using namespace std;
int a[100];
int x1=0;
void qs(int a[],int p,int r);
int s(int a[],int p,int r);

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    qs(a,0,n-1);
   // cout<<x1<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
void qs(int a[],int p,int r)
{
    int q;
    if(p<r){
    q=s(a,p,r);
    qs(a,p,q-1);
    qs(a,q+1,r);
    }
}
int s(int a[],int p,int r)
{
    int x=a[r],i=p-1;
    for(int j=p ;j<=r-1;j++ )
    {
        if(a[j]<=x)
        {
            i++;
            swap(a[i],a[j]);
           // x1++;
        }
    }
    swap(a[i+1],a[r]);
  //  x1++;
    return i+1;
}
