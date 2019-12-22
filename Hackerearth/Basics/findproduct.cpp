#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,res=1;
	cin>>n;
	long long arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	for(int j=0;j<n;++j){
		res = (res * arr[j]) % 1000000007;
	}
	cout<<res<<endl;
	return 0;
}
