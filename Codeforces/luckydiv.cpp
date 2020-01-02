#include <bits/stdc++.h>
using namespace std;

int main(){
	int luck[13] = {4,7,47,74,447,474,744,747,444,777,44,77,477},n;
	bool flag=false;
	cin>>n;
	for(int i=0;i<13;++i){
		if(n%luck[i]==0){
			flag=true;
		}
	}
	
	if(flag==true){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
