#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int size;
    	cin>>size;
    	int arr[size];

    	for(int i=0;i<size;i++){
    	    cin>>arr[i];
    	}

    	//logic
    	int flag=0;
    	for(int i=0;i<size;i++){
    	    int sum=0;
    	    sum+=arr[i];
    	    if(sum>=2048){
    	        flag=1;
    	    }
    	    else{
    	        flag=0;
    	    }
    	}
	
    	if(flag==1){
    	    cout<<"YES"<<endl;
    	}
    	else{
    	    cout<<"NO"<<endl;
    	}
    }
    return 0;
}
