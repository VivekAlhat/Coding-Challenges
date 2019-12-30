#include <bits/stdc++.h>
using namespace std;

int main(){
	int n = 5;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long min=0,max=0;
	for(int j=0;j<n-1;++j){
		min += arr[j];
		max += arr[j+1];
	}
	cout<<min<<" "<<max<<endl;
	return 0;
}
