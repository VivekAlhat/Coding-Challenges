#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

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
		ll key, l=0, r=n-1, ans=-1;
		scanf("%lld",&key);
		while(l<=r){
			int mid = (l+r)/2;
			if(arr[mid]==key){
				ans = mid;
			}
			
			if(arr[mid]>key){
				r = mid-1;
			}else{
				l = mid+1;
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
