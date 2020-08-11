#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n,m;
	cin>>n>>m;
	vector<ll> vec(n,0);
	while(m--){
		ll a,b,k;
		cin>>a>>b>>k;
		a-=1;
		b-=1;
		for(int i=a;i<=b;++i){
			vec.at(i) += k;
		}
	}
	cout<<*max_element(vec.begin(),vec.end())<<endl;
	return 0;
}
