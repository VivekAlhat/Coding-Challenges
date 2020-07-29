#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,k, elem;
		string ans = "";
		cin>>n>>k;
		for(int i=0;i<n;++i){
			cin>>elem;
			if(elem%k==0){
				ans += '1';
			}else{
				ans += '0';
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
