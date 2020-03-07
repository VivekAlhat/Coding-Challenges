#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char** argv){
	int t, n, m;
	cin>>t;
	while(t-->0){
		cin>>n>>m;
		int type[n], price[n];
		vector <int> vec;
		map <int,int> sol;
		map <int, int>::iterator itr;
		for(int i=0;i<n;++i){
			cin>>type[i];
		}
		for(int i=0;i<n;++i){
			cin>>price[i];
		}
		
		for(int j=0;j<n;++j){
			sol[type[j]] += price[j];
		}
		
		for(itr = sol.begin(); itr!=sol.end(); ++itr){
			vec.push_back(itr->second);
		}
		
		cout<<*min_element(vec.begin(), vec.end())<<endl;
	}
	return 0;
}
