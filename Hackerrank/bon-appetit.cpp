#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,charged,sum=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	
	cin>>charged;
	for(int i=0;i<n;++i){
		if(i!=k){
			sum+=arr[i];
		}
	}
	sum/=2;
	if(charged==sum){
		cout<<"Bon Appetit"<<endl;
	}else{
		cout<<charged-sum<<endl;
	}
	return 0;
}
