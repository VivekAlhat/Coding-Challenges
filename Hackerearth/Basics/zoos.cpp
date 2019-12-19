#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int zcnt=0,ocnt=0;
	cin>>s;
	for(int i=0;i<20;++i){
		if(s[i]=='z' || s[i]=='Z'){
			zcnt++;
		}
		else if(s[i]=='o' || s[i]=='O'){
			ocnt++;
		}
		else{
			break;
		}
	}
	if(ocnt%zcnt==0 && ocnt!=zcnt){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}
