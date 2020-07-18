#include <bits/stdc++.h>
using namespace std;

int binSearch(int arr[], int n, int key, int num){
	int l=0, r=n-1, res=-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(arr[mid]==key){
			res = mid;
			if(num == 1){
				r = mid-1;
			}
			if(num == 2){
				l = mid+1;
			}
		}else if(arr[mid]<key){
			l = mid+1;
		}else{
			r = mid-1;
		}
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int first = binSearch(arr, n, key, 1);
	int last = binSearch(arr, n, key, 2);
	if(first!=-1){
		cout<<"Count: "<<last-first+1<<endl;
	}else{
		cout<<"elem not found"<<endl;
	}
	return 0;
}
