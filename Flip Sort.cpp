     #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
       vector<int>s,x;
       s.clear();
       while(cin>>n)
       {
           f=0,c=0;
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
          cout<<"Minimum exchange operations : "<<f<<endl;
          s.clear();



       }
        return 0;
    }
