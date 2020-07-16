#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int binSearch(ll arr[], int l, int r, int key){
	if(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==key){
			return mid;
		}

		if(arr[mid]<key){
			return binSearch(arr, mid+1, r, key);
		}else{
			return binSearch(arr, l, mid-1, key);
		}
	}
	return -1;
}

int main(){
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	ll n,q;
	scanf("%lld%lld",&n,&q);
	ll arr[n];
	for(ll i=0;i<n;++i){
		scanf("%lld",&arr[i]);
	}
	sort(arr, arr+n);
	while(q--){
		int key, l=0, r=n-1;
		scanf("%d",&key);
		ll ans = binSearch(arr, l, r, key);
		printf("%lld\n", ans);
	}
	return 0;
}
