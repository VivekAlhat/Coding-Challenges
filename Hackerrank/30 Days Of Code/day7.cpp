#include <bits/stdc++.h>
using namespace std;

int main(int argc,const char** argv){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	int i= n-1;
	while(i!=0){
		cout<<arr[i]<<" ";
		i-=1;	
	}
	cout<<arr[0]<<endl;
	return 0;
}
