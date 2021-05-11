#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    bool t;
    string s;

    while (cin>>s)
    {
      if(s=="#")
      {
          break;
      }
      t=next_permutation(s.begin(),s.end());

      if (t)
      {
          cout<<s<<endl;
      }
     else
     {
         cout<<"No Successor"<<endl;
     }
    }

    return 0;
}
