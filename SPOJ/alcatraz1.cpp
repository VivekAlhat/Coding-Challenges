#include<bits/stdc++.h>
using namespace std;
int main(int argc,const char** argv){
	int t,sum;
	string num;
	cin>>t;
	while(t--){
		sum = 0;
		cin>>num;
		int l = num.length();
		for(int i=0;i<l;++i){
			sum += num[i]-48;	
		}
		cout<<sum<<endl;
	}
	return 0;
}
