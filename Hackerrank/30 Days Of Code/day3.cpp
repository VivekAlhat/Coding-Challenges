#include <bits/stdc++.h>
using namespace std;
int main(int argc,const char** argv){
	int n;
	cin>>n;
	if(n%2!=0){
		cout<<"Weird"<<endl;
	}
	else if(n%2 == 0 && n>1&&n<=5){
		cout<<"Not Weird"<<endl;
	}
	else if(n%2 == 0 && n>5&&n<=20){
		cout<<"Weird"<<endl;
	}
	else if(n>20 && n%2==0){
		cout<<"Not Weird"<<endl;
	}
	return 0;
}
