#include<bits/stdc++.h>
using namespace std;
int findSwaps( int n)
{
long long int count = 0, i, j, temp,b[100000];
//vector<int>b;

      for(j=0, i = 1; i<=n; i++,j++)
       {
           b[j]=i;
       }
      sort(b,b+n,greater<int>());

   for( i = 0; i < n; i++ ) {
      for( j = 0; j < n - 1; j++ ) {
            if( b[j] > b[j+1] ) {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
               count++;
         }
      }
   }
  return count;
}
int main()
{
  long long  int c,j=1,k,d;
    cin>>c;
    while(c--)
    {
        cin>>d;
        k=findSwaps(d);
        if(k%2==0)
        {
            cout<<"Case "<<j<<": "<<k/2<<endl;
        }
        else
        {
            cout<<"Case "<<j<<": "<<k<<"/2"<<endl;
        }
        j++;
        //cout<<k;
    }
    return 0;
}
