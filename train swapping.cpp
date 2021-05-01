     #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
       vector<int>s,x;
       s.clear();
       cin>>o;
       while(o--)
       {
           f=0;
           cin>>n;
           for(i=0;i<n;i++)
           {
               cin>>p;
               s.push_back(p);
           }
           for (i = 0; i < n; i++)
           {

              for (j = 0; j < n-1; j++)
              {

                     if (s[j] > s[j+1])
                     {
                          swap(s[j],s[j+1]);
                          f++;
                     }
              }
           }
          cout<<"Optimal train swapping takes "<<f<<" swaps."<<endl;
          s.clear();



       }
        return 0;
    }
