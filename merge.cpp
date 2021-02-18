#include<iostream>
using namespace std;
void di(int p,int r);
void mer(int p,int q,int r);
int a[100];
int main()
{
    int n,i;
    cin>>n;
    for( i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    di(1,n);
    for(int i=1;i<=n;i++)
    {
        cout <<a[i]<<" "<<endl;
    }

    return 0;
}
void di(int p,int r)
{
    int q;
    if(p<r){
    q=(p+r)/2;
    di(p,q);
    di(q+1,r);
    mer(p,q,r);
    }
}
void mer(int p,int q,int r)
{
    int n1=q-p+1,n2=r-q,i,j,k;
    int l[n1+1],t[n2+1];
    for( i=1;i<=n1;i++)
    {
        l[i]=a[p+i-1];
    }
    for( j=1;j<=n1;j++)
    {
        t[j]=a[q+j];
    }
    l[n1+1]=999999;
    t[n2+1]=9999999;
    j=1;
    i=1;
    for( k=p;k<=r;k++)
    {
        if(l[i]<=t[j])
        {
          a[k]=l[i];
          i++;
        }
        else
        {
            a[k]=t[j];
            j++;
        }
    }

}
