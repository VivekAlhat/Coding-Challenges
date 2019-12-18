#include<bits/stdc++.h>
using namespace std;

int missing(int a[],int n);

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<missing(a,n)<<endl;
	}
}

int missing(int a[],int n){
	int total = (n+2)*(n+1)/2;
	for(int i=0;i<n;i++){
		total-=a[i];
	}
	return total;
}
