#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int ans = 0;
	for(int i=0;s[i];++i){
		if(s[i]=='H' && s[i]>'A'|| s[i]=='Q' && s[i]>'A'|| s[i]=='9'){
			ans=1;
			break;
		}
	}
	if(ans!=0){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}
