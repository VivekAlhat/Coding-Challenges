#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char** argv){
	int n = 0, target = 0, sum = 0;
	cin>>n>>target;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(arr[j] == target - arr[i]){
				cout<<"[ "<<i<<", "<<j<<" ]"<<endl;
			}
		}
	}
	return 0;
}
