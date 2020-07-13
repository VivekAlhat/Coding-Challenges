#include <bits/stdc++.h>
using namespace std;

int main(){
	int s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	set<int> count;
	count.emplace(s1);
	count.emplace(s2);
	count.emplace(s3);
	count.emplace(s4);
	cout<<4-count.size()<<endl;
	return 0;
}
