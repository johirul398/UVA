#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0,count=0;
    char s[100];
    cin.getline(s,80);
    while(s[k]!=NULL)
    {
        if(s[k]==' ')
        {
            count++;
        }
        k++;
    }
    cout<<count+1<<endl;
    return 0;
}
