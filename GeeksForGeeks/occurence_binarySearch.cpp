#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int l, int r, int key){
	int res = -1;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==key){
			res = mid;
			r = mid - 1;
		}

		if(arr[mid]>key){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return res;
}

int lastOccurence(int arr[], int l, int r, int key){
	int res = -1;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==key){
			res = mid;
			l = mid+1;
		}

		if(arr[mid]>key){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return res;
}

int main(){
	int n, *arr;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	int fp,lp,key,l=0,r=n-1;
	cin>>key;
	fp = firstOccurence(arr, l, r, key);
	lp = lastOccurence(arr, l, r, key);
	cout<<fp<<" "<<lp<<endl;
	return 0;
}
