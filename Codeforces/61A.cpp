#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string num1,num2;
	cin>>num1>>num2;
	for(int i=0;i<num1.size();++i){
		if(num1[i]!=num2[i]){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	cout<<"\n";
	return 0;
}
