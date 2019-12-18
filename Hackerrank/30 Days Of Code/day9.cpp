#include<bits/stdc++.h>
using namespace std;

int factorial(int);

int main(){
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
	return 0;
}

int factorial(int n){
	if(n>1){
		return n * factorial(n-1);
	}
	else{
		return n;
	}
}
