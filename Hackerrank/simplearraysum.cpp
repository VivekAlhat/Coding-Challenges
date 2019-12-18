#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char** argv){
	int arr[1000], temp=0, n;
	cin>>n;
	for (int i = 0; i<n; i++){
		cin>>arr[i];
	}
	
	for(int i = 0; i<n; i++){
		temp += arr[i];
	}
	cout<<temp<<endl;
	
	return 0;
}
