#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,x=0;
	string n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n[1]=='+'){
			++x;
		}
		else{
			--x;
		}
	}
	cout<<x<<endl;
	return 0;
}
