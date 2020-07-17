#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> vec;
		unordered_map<int, int> uniPerm;
		for(int i=0;i<2*n;++i){
			int e;
			cin>>e;
			vec.push_back(e);
			uniPerm[vec.at(i)]++;
		}
		
		for(auto e: vec){
			if(uniPerm[e]>1){
				cout<<e<<" ";
				uniPerm[e]--;
			}
		}
		cout<<"\n";	
	}
	return 0;
}
