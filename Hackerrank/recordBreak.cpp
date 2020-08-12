#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,best=0,worst=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	int currB=arr[0], currW=arr[0];
	for(int i=1;i<n;++i){
		if(arr[i]>currB){
			currB = arr[i];
			best++;
		}else if(arr[i]<currW){
			currW = arr[i];
			worst++;
		}
	}

	cout<<best<<" "<<worst<<endl;
	return 0;
}
