/*
 we know summing equation of n series
s=n*(n+1)/2
n^2+n=2*s
n^2+n+(-2*s)=0
Using quadratic equation ax^2+bx+c=0
here,a=b=1
del = sqrt(b*b-4*a*c) = sqrt(1-4*1*(-2s)) = sqrt(1+8s)
we know x = (-b(+-) del)/2a
so n = (-1+sqrt(1+8s))/2*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,e,f,g;
    cin>>b;
    while(b--)
    {
        cin>>a;

       c=(-1+sqrt(1+8*a))/2;
        cout<<c<<endl;

    }

    return 0;
}
