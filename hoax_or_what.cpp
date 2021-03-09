#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,a,b,c,d,e,f;
     multiset<int> s;
    multiset<int>::iterator lo,hi;
    long long int ans=0;

    while (cin >> a)
    {
        if(a==0)
        {
            break;
        }

        while (a--)
        {
            cin >> k;

            while (k--)
            {

                cin >> b;

                s.insert(b);
            }
            hi=s.end();
            lo=s.begin();
           hi--;
            ans += *hi - *lo;

            s.erase(lo);
            s.erase(hi);
        }

        cout << ans << endl;
        ans=0;
        s.clear();
    }
}
