#include <bits/stdc++.h>
using namespace std;
int main(int argc,const char** argv){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		int len = s.length();
		char arr[10000];
		for(int i=0;i<len;++i){
			if(i%2==0){
				arr[i]=s[i];
				cout<<arr[i];
			}
		}
		cout<<" ";
		for(int j=0;j<len;++j){
			if(arr[j]!=s[j]){
				cout<<s[j];
			}
		}
		cout<<"\n";
	}
	return 0;
}
