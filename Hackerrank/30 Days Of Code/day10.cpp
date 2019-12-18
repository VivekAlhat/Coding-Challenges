#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,temp=0,cnt=0,j=0,max=0;
	int arr[10000];
	cin>>n;
	while(n>0){
		temp = n%2;
		n = n/2;
		arr[j]=temp;
		j++;
	}
	
	for(int i=0;i<j;++i){
		if(arr[i]==0){
			if(cnt>max){
				max=cnt;
			}
			cnt=0;
		}
		else{
			cnt++;
		}
	}
	
	if(cnt>max){
		max=cnt;
	}
	cout<<max<<endl;
	return 0;
}
