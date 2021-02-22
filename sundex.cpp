#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l,j,k,a,b;
    string s;
    k=1;
    while(cin>>s)
    {
        if(s=="*")
        {
            break;
        }
        if(s=="Hajj")
        {
            cout<<"Case "<<k<<": Hajj-e-Akbar"<<endl;
        }
         if(s=="Umrah")
        {
            cout<<"Case "<<k<<": Hajj-e-Asghar"<<endl;
        }
        k++;
    }
    return 0;
}
