#include<iostream>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;
//map<int>mp;
int main()
{
	int tst;
	cin>>tst;
	while(tst--)
	{
		//mp.clear();
		int n,m,cnt=0;
		long long sum=0LL;
		cin>>n>>m;
		int t[n];
		for(int i=0; i<n; i++)
		{
			cin>>t[i];
			sum+=t[i];
		}
		if(sum%m) {
			cout<<n<<endl;
			continue;
		}
		long long x=sum,y=sum;
		int ans=0;
		for(int i=0; i<n; i++)
		{
			x-=t[i];
			if(x%m)
			{
				ans=(n-(i+1));
				break;
			}
		}
		for(int i=n-1; i>=0; i--)
		{
			y-=t[i];
			if(y%m)
			{
				ans=max(ans, i);
				break;
			}
		}
		if(ans==0) cout<<-1<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}
