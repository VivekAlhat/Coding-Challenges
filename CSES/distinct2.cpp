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
	int res = 0;
	sort(arr,arr+n);
	for(int i=0;i<n;++i){
		while(arr[i]==arr[i+1]){
			i++;
		}
		res++;
	}
	cout<<res<<endl;
	return 0;
}
