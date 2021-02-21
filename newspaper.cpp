#include <bits/stdc++.h>
using namespace std;
int main() {
   // freopen("input.txt","w",stdout);
    int t,a,b,c,d,e,f,h,i,j,k,l,m;
    double g;
     char x[1000];
   // string x;
   // string line;
   char line[10000];
    int n[2000];
    while(scanf("%d\n",&t)==1) {
            for(m=0;m<t;m++)
            {
             g=0.00;
           //cin>>a;
            scanf("%d\n",&a);
          // getchar();
            for(i=0;i<a;i++)
            {
              // cin>>x[i]>>n[i];
               scanf("%c%d\n",&x[i],&n[i]);
              // getchar();

            }
            //cin>>d;
             scanf("%d\n",&d);
           // getchar();
         // cin.ignore();
            while(d--)
            {
               // cin.ignore();
              // getchar();
             //  line="";
             //  getline(cin,line);
              gets(line);
              // cin>>line;
                int q=strlen(line);
               // cout<<q<<endl;
               //int q=line.length();
                for(i=0;i<a;i++)
                {
                    for(j=0;j<q;j++)
                    {
                        if(x[i]==line[j])
                        {
                           g+=n[i];
                        }
                    }
                }

               //
            }

           // cout<<g/100<<endl;
           printf("%0.2lf$\n",g/100);
            }
          // g=0;
      // string clear(line);

    }
    return 0;
}
