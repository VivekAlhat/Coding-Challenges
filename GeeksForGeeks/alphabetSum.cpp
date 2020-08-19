#include<bits/stdc++.h>
using namespace std;

int main(){
	int cnt = 0;
	string s;
	cin>>s;
	for(int i=0; s[i] ;++i){
		cnt += s[i] - 'a' + 1;
	}
	cout<<cnt<<endl;
	return 0;
}
