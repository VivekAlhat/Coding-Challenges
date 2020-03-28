#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	cin>>t;
	while(t-->0){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		sort(arr, arr+n);
		cout<<arr[0]+arr[1]<<endl;
	}
}
