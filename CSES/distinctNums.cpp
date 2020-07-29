#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	set<int>s(arr,arr+n);
	cout<<s.size()<<endl;
	return 0;
}
