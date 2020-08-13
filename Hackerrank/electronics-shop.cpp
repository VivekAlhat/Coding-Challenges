#include <bits/stdc++.h>
using namespace std;

int main(){
	int b,n,m;
	cin>>b>>n>>m;
	int keyboard[n], usb[m];
	for(int i=0;i<n;++i){
		cin>>keyboard[i];
	}

	for(int i=0;i<m;++i){
		cin>>usb[i];
	}
	
	vector<int> res;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(keyboard[i]+usb[j]<=b){
				res.push_back(keyboard[i]+usb[j]);
			}
		}
	}

	if(res.empty()){
		cout<<-1<<endl;
	}else{
		cout<<*max_element(res.begin(),res.end())<<endl;
	}
	return 0;
}
