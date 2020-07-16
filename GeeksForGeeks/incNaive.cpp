#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n]={0};
	while(m--){
		int l,r,k;
		cin>>l>>r>>k;
		for(int i=l-1;i<r;++i){
			arr[i]+=k;
		}
	}

	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
