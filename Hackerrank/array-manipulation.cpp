#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m, max=INT_MIN;
	cin>>n>>m;
	vector<ll> vec(n+1,0);
	while(m--){
		ll f,l,s;
		cin>>f>>l>>s;
		for(ll i=f-1;i<l;++i){
			vec.at(i)+=s;
			if(vec.at(i)>max){
				max = vec.at(i);
			}
		}
	}
	//cout<<*max_element(vec.begin(), vec.end())<<endl;
	//for(int i=0;i<n;++i){
	//	cout<<arr[i]<<" ";
	//}
	cout<<max<<"\n";
	return 0;
}
