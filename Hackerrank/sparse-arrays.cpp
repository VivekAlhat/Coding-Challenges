#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,q;
	cin>>n;
	vector<string> inp;
	while(n--){
		string s;
		cin>>s;
		inp.push_back(s);
	}
	cin>>q;
	while(q--){
		string q;
		int cnt=0;
		cin>>q;
		for(auto el: inp){
			if(q == el){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
