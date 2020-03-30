#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v1 = {1,2,3};
	vector <int> v2(v1.begin(), v1.end());
	for(int& elem: v2){
		cout<<elem<<" ";
	}
	cout<<endl;
	return 0;
}
