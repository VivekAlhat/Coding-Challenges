#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,m,k;
		cin>>n>>m>>k;
		vector<ll> vec;
		for(ll i=0;i<n;++i){
			ll elem;
			cin>>elem;
			vec.push_back(pow(elem,k));
		}

		ll res = vec[0];
		for(int i=1;i<vec.size();++i){
			res = (((vec.at(i) * res))/ (__gcd(vec.at(i), res)));
		}
		cout<<res%m<<endl;
	}
	return 0;
}
