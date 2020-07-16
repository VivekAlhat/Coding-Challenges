#include <iostream>
using namespace std;

int main(){
	int n, *arr, key, fp=0, lp=0;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	cin>>key;
	for(int i=0;i<n;++i){
		if(arr[i]==key){
			fp = i;
			break;
		}
	}

	for(int j=n-1;j>=0;--j){
		if(arr[j]==key){
			lp = j;
			break;
		}
	}
	cout<<fp<<" "<<lp<<endl;
	return 0;
}
