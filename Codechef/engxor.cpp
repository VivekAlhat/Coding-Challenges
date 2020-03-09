#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	scanf("%lld", &t);
	while(t-->0){
		ll n, q;
		ll cnt = 0;
		scanf("%lld %lld", &n, &q);
		ll vec[n];
		for(int i=0;i<n;++i){
			scanf("%lld", &vec[i]);
			if(__builtin_popcount(vec[i])%2==0)
				cnt++;
		}
		while(q-->0){
			ll el;
			scanf("%lld", &el);
			ll elCnt = __builtin_popcount(el);
			if(elCnt%2==0){
				cout<<cnt<<" "<<n-cnt<<endl;
			}else{
				cout<<n-cnt<<" "<<cnt<<endl;
			}
		}
	}
	return 0;
}

