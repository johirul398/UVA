#include<bits/stdc++.h>
using namespace std;

int multiply( long long int x,long long int a[],long long int ze)
{
	long long int carry=0,i,p;

	for(i=0;i<ze;++i)
	{
		p=a[i]*x+carry;
		a[i]=p%10;
		carry=p/10;
	}

	while(carry!=0)
	{
		a[ze]=carry%10;
		carry=carry/10;
		ze++;
	}
    	return ze;
}

int main()
{
	long long int n,a[90000],i,ze=1;
    a[0]=1;


    while(cin>>n)
    {
        cout<<n<<"!"<<endl;

         for(i=2;i<=n;++i) {
		ze=multiply(i,a,ze);
    }

    for(i=ze-1;i>=0;--i)
    {
		cout<<a[i];
    }
    }
    cout<<endl;



   	return 0;
}
