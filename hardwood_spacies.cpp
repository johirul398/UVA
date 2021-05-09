#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
    int i ,j ,k,l,m,n,a,b;
    vector<string> sa;
    map<string, double>ta;
     string s;
    cin>>a;
   getchar();
   getchar();
    while(a--)
    {
        j=0;
        while(getline(cin,s)&&s!="")
        {
            // sa.push_back(s);
            if(ta.count(s)==0)
              {
                  ta[s]=1;
                sa.push_back(s);
              }
             else
            {
               ta[s]=ta[s]+1;
            }
            j++;
       }
      sort(sa.begin(),sa.end());
    for(i=0;i<sa.size();i++)
    {
        cout<<sa[i]<<" ";
        printf("%.4lf\n",ta[sa[i]]/j*100.0);
       // cout<<sa[i]<<" "<<ta[sa[i]]/j*100<<endl;
    }
    ta.clear();
    sa.clear();
    if(a>0)
    {
        cout<<endl;
    }
    // getchar();
 }

    return 0;
}
