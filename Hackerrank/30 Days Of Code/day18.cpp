#include <bits/stdc++.h>
using namespace std;
int main(){
	int flag = 0;
	string s;
	cin>>s;
	string k = s;
	int l = s.length();
	int i=0;
	int j=l-1;
	while(i<j){
		int temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	for(int i=0;i<l;++i){
		if(s[i]==k[i]){
			flag = 1;
		}else{
			flag = 0;
		}
	}
	
	if(flag==1){
		cout<<"The word, "<<k<<", is a palindrome."<<endl;
	}
	else{
		cout<<"The word, "<<k<<", is not a palindrome."<<endl;
	}
	return 0;
}
