#include<bits/stdc++.h>
using namespace std;
struct comp {
    template <typename T>

    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second < r.second;
        }
        if (l.second == r.second) {
            return l.first > r.first;
        }
    }
};
int main()
{
    int a,b,c,d,f,i,j,k,l,n=0;
    string s,x;
    map<int,int>m;
    while(getline(cin,s))
    {
        if(n) cout<<endl;

       a=s.size();
       for(i=0;i<a;i++)
       {
           b=int(s[i]);
           m[b]++;
       }
       set<pair<int, int>, comp> S(m.begin(), m.end());
       //work online ide and accepted
      for (auto& it : S) {
        cout << it.first <<" "<< it.second << endl;
         }
        m.clear();
       n++;
    }

    return 0;
}
