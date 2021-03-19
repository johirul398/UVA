#include <bits/stdc++.h>
using namespace std;
struct comp {
    template <typename T>

    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }
        if (l.second == r.second) {
            return l.first < r.first;
        }
    }
};

void sort(map<char, int>& M)
{
    set<pair<char, int>, comp> S(M.begin(), M.end());//sort map value
   //it work in c++11 online editor get output correctly
    for (auto& it : S) {
        cout << it.first <<" "<< it.second << endl;
    }
}

int main()
{
    int a,b,c,d,e,i,j;
    string s;
    char ch;
    map<char,int>m;
  //  priority_queue< pair<int,char> >pq;
    cin>>c;
    cin.ignore();
    while(c--)
    {
        getline(cin,s);
        a=s.size();
        for(i=0;i<a;i++)
        {
          if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            {
               ch=toupper(s[i]);
                m[ch]++;

            }
         }
      }
       sort(m);
    return 0;
}
