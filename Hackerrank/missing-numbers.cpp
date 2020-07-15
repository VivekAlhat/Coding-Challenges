#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	cin>>m;
	int ar[m];
	for(int j=0;j<m;++j){
		cin>>ar[j];	
	}
	unordered_map<int, int> umap1, umap2;
	for(int i=0;i<n;++i){
		umap1[arr[i]]++;
	}

	for(int j=0;j<m;++j){
		umap2[ar[j]]++;
	}
	return 0;
}
