#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a, elem;
		cin>>a;
		vector<int> vec;
		for(int i=0;i<a;++i){
			cin>>elem;
			vec.push_back(elem);
		}
		int arr[a];
		sort(vec.begin(),vec.end());
		adjacent_difference(vec.begin(), vec.end(), arr);
		arr[0]=0;
		int m = *max_element(arr, arr+a);
		if(m<=1 || a==1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
