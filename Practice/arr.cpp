#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[5] = {5,4,3,6};
	
	// Methods of printing an array;
	
	int size = sizeof(arr)/sizeof(*arr);
	
	/*for(auto i=0; i<size; ++i){
		cout<<arr[i]<< " ";
	}*/
	
	/*for(int& elem: arr){
		cout<<elem<<" ";
	}*/
	
	// Sorting an array
	sort(arr, arr+size);
	
	for(int& elem: arr){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}
