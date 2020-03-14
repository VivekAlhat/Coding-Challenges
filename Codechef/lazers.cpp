#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n, q, x1, x2, y;
		int cnt = 0;
		cin>>n>>q;
		ll arr[n];
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		for(int j=0;j<q;++j){
			cin>>x1>>x2>>y;
			for(int k=(x1-1);k<(x2-1);++k){
				if(y>arr[k] && (arr[k+1]>y || arr[k+1]==y)){
					cnt += 1;
				}else if(y<arr[k] && (arr[k+1]<y || arr[k+1]==y)){
					cnt += 1;
				}else if(y==arr[k]){
					if(arr[k+1]>y || arr[k+1]<y){
						cnt += 1;
					}else if(arr[k+1]==y){
						cnt += 2;
					}
				}
			}
			cout<<cnt<<endl;
			cnt = 0;
		}
	}
	return 0;
}
