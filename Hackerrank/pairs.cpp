#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// Use unordered set and its find operations because it runs in O(1)

int main(){
	ll n, k;
	cin>>n>>k;
	unordered_set<ll> st;
	for(int i=0;i<n;++i){
		ll e;
		cin>>e;
		st.insert(e);
	}

	int cnt = 0;
	for(auto elem: st){
		if(st.find(elem+k)!= st.end()){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
