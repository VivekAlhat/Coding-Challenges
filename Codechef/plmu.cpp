#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int size=0,val1=0,val2=0,cnt1=0,cnt2=0;
		cin>>size;
		for(int i=0;i<size;i++){
			cin>>val1;
			if(val1==0){
				cnt1++;
			}
			else if(val1==2){
				cnt2++;
			}
		}
		if(cnt1>0){
			val2=(cnt1*(cnt1-1))/2;
		}
		if(cnt2>0){
			val2=val2+(cnt2*(cnt2-1))/2;
		}
		cout<<val2<<endl;
	}
	return 0;
}
