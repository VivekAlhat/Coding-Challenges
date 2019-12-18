#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n>0){
			cout<<n<<" is positive integer"<<endl;
		}
		else if(n<0){
			cout<<n<<" is negative integer"<<endl;
		}
		else{
			cout<<"n is zero"<<endl;
		}
	}
	return 0;
}
