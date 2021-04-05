#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int i=0,j,k=0,l,n;
    gets(a);
    j=strlen(a)-1;
    while(i<j)
    {
        k=a[j];
        a[j]=a[i];
        a[i]=k;
        i++;
        j--;

    }
    cout<<a;
    return 0;
}
