#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int t;
	cin>>t;
	while(t-->0){
		int count = 0;
		ll n;
		cin>>n;
		ll a[n],b[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		a[-1] = 0;
		for(int i=0;i<n;++i){
			cin>>b[i];
		}
		
		for(int j=0;j<n;++j){
			if(b[j] <= a[j]-a[j-1]){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
