#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}

	int index, value;
	for(int i=1;i<n;++i){
		value = arr[i];
		index = i;

		while(index>0 && arr[index-1]>value){
			arr[index] = arr[index-1];
			index -= 1;
		}
		arr[index] = value;
	}

	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
