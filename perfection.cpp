#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m=0,n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%lld",&n),n)
    {
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
              m=m+i;
            }
            if(m>n)
            {
                break;
            }
        }
           printf("%5d  ", n);
		if (m>n)
			printf("ABUNDANT\n");
		else if (m == n)
			printf("PERFECT\n");
		else
			printf("DEFICIENT\n");
         m=0;
        }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
