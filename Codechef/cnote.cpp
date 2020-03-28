#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	ll t;
	cin>>t;
	while(t-->0){
		int flag = 0;
		ll x, y, k, n;
		cin>>x>>y>>k>>n;
		int p[n],c[n];
		for(int i=0;i<n;++i){
			cin>>p[i]>>c[i];
			if(c[i]<=k && p[i]>=(x-y)){
				flag = 1;
			}
		}
		if(flag == 1){
			cout<<"LuckyChef\n";
		}else{
			cout<<"UnluckyChef\n";
		}
		flag = 0;
	}
	return 0;
}
