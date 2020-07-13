#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string str;
	cin>>str;
	set<char> s(str.begin(), str.end());
	if(s.size()%2!=0){
		cout<<"IGNORE HIM!\n";
	}else{
		cout<<"CHAT WITH HER!\n";
	}
	return 0;
}
