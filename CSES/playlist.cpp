#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(auto i = 0; i<n; ++i)
	{
		cin>>arr[i];
	}
	set<int> unique(arr,arr+n);
	cout<<unique.size()<<endl;
	return 0;
}
