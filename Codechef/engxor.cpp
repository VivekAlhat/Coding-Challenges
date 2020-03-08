#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, const char** argv){
	ll even=0, odd=0;
	ll t, n, q, el;
	scanf("%lld", &t);
	while(t-->0){
		int e,o;
		scanf("%lld %lld", &n, &q);
		ll data[n];
		for(ll i=0;i<n;++i){
			scanf("%lld", &data[i]);
			int count = __builtin_popcount(data[i]);
			if(count%2==0){
				even += 1;
			}else{
				odd += 1;
			}
		}
		
		for(ll i=0;i<q;++i){
			scanf("%lld", &el);
			int count = __builtin_popcount(el);
			if(count%2==0){
				e = even;
				o = odd;
			}else{
				o = even;
				e = odd;
			}
			cout<<e<<" "<<o<<endl;
		}
	}
	return 0;
}
