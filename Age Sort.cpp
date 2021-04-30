
     #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
       vector<long long int>s,x;
       s.clear();
       while(cin>>n)
       {

           if(n==0)
           {
               break;
           }
           for(i=0;i<n;i++)
           {
               cin>>p;
               s.push_back(p);
           }
           sort(s.begin(),s.end());
           cout<<s[0];
           for (i = 1; i < n; i++)
           {

              cout<<" "<<s[i];
           }
           cout<<endl;
          s.clear();

       }
        return 0;
    }
