#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, r, c;
	int* ptr1, ptr2;
	vector <pair <int,int>> v;
	int arr[7][2] = {{2,2},{3,3},{4,4},{5,5},{6,6},{7,7},{8,8}};
	int pts[19][2] = {{2,2},{1,3},{3,1},{4,2},{5,1},{1,5},{2,6},{1,7},{7,1},{8,2},{2,8},{3,7},{4,8},{8,4},{7,5},{8,6},{6,8},{7,7},{8,8}};
	cin>>t;
	while(t-->0){
		cin>>r>>c;
		int s=0,cnt=19;
		for(int i=0;i<7;++i){
			for(int j=0;j<2;++j){
				int t1 = arr[i];
				ptr1 = &t1
				int t2 = arr[j];
				ptr2 = &t2
				if(r==ptr1 && c==ptr2){
					s+=1;
					v.push_back(make_pair(1,1));
					r = 1;
					c = 1;
					break;
				}else if(r+c == ptr1+ptr2){
					s+=2;
					v.push_back(make_pair(ptr1,ptr2));
					v.push_back(make_pair(1,1));
					r = 1;
					c = 1;
					break;
				}
			}
		}
		
		if(r==8 && c==8){
			cout<<s+18<<endl;
			for(int i=0;i<v.size();++i){
				cout<<v[i].first<<" "<<v[i].second<<endl;
			}
			for(int i=0;i<19;++i){
				for(int j=0;j<2;++j){
					cout<<pts[i]<<" "<<pts[j]<<endl;
				}
			}
		}else{
			cout<<s+19<<endl;
			for(int i=0;i<v.size();++i){
				cout<<v[i].first<<" "<<v[i].second<<endl;
			}
			for(int i=0;i<19;++i){
				for(int j=0;j<2;++j){
					cout<<pts[i]<<" "<<pts[j]<<endl;
				}
			}
		}
	}
	return 0;
}
