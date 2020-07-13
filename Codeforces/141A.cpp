#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	unordered_map<char, int> cCount, ansCount;
	unordered_map<char, int>:: iterator it;

	for(int i=0;s1[i];++i){
		cCount[s1[i]]++;
	}

	for(int i=0;s2[i];++i){
		cCount[s2[i]]++;
	}

	for(int i=0;s3[i];++i){
		ansCount[s3[i]]++;
	}

	if(cCount == ansCount){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

	return 0;
}
