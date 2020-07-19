#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, n, *arr;
	cin>>n>>k;
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[k-1]<<endl;
	return 0;
}
