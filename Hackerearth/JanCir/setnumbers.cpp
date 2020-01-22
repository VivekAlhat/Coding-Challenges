#include<bits/stdc++.h>
using namespace std;

vector<int> dectobin(int);

int main(){
	int t,n,cnt1=0,cnt2=0,ans,fans;
	cin>>t;
	while(t-->0){
		cin>>n;
		vector<int> nu,re,res;
		nu = dectobin(n);
		cnt1 = count(nu.begin(),nu.end(),1);
		for(int i=0;i<=n;++i){
			re = dectobin(i);
			cnt2 = count(re.begin(),re.end(),1);
			if(cnt2>cnt1){
				res.push_back(cnt2);
			}
		}
		ans = *max_element(res.begin(),res.end());
		for(int j=0;j<=n;++j){
			if(dectobin(j).size()==ans){
				fans = j;
			}
		}
		cout<<fans<<endl;
	}
}

vector<int> dectobin(int num){
	vector<int> v;
	int i=0,res;
	while(num>0){
		res = num%2;
		v.push_back(res);
		num = num/2;
		i++;
	}
	return v;
}
