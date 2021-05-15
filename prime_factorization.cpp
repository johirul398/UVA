#include <bits/stdc++.h>
using namespace std;
void primeFactors(int n)
{
    int a=0,v,b,c,d;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }


    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }

    }

       if(n>1)
       {
            cout << n << " ";

       }
}

/* Driver code */
int main()
{
    int n = 123456789;
    primeFactors(n);
    return 0;
}
