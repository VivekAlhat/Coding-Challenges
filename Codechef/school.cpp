#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char** argv){
	int t,n;
	vector <int> res;
	cin>>t;
	while(t-->0){
		res.clear();
		cin>>n;
		int a[n], b[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		for(int j=0;j<n;++j){
			cin>>b[j];
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int k=0;k<n;++k){
			if(a[k]<b[k]){
				res.push_back(a[k]);
			}else{
				res.push_back(b[k]);
			}
		}
		cout<<accumulate(res.begin(), res.end(), 0)<<endl;
	}
	return 0;
}
