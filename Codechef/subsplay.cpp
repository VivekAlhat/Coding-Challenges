#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	long t,n;
	int len = 0;
	string s;
	cin>>t;
	while(t--){
		cin>>n;
		cin.ignore();
		getline(cin,s);
		for(int i=0;i<n;++i){
			len = n;
			for(int j=max(i-len,0);j<i;++j){
				if(s[i]==s[j] && (len>i-j)){
					len = i-j;
				}
			}
		}
		cout<<n-len<<endl;
		return 0;
	}
}
