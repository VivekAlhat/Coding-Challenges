#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt=0, tmp=-1;
	cin>>n;
	while(n--){
		int a,b;
		cin>>a>>b;
		cnt += b;
		cnt -= a;
		if(cnt>tmp){
			tmp = cnt;
		}
	}
	cout<<tmp<<endl;
	return 0;
}
