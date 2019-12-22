#include <bits/stdc++.h>
using namespace std;

class Difference{
	private:
		vector<int> elements;
	public:
		int maxDiff;
		
		Difference(vector<int> elem){
			this->elements = elem;
		}
		
		void computeDifference(){
			int n = elements.size();
			sort(elements.begin(),elements.end());
			maxDiff = elements[n-1]-elements[0];
			cout<<maxDiff<<endl;
		}
};

int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;++i){
		int elem;
		cin>>elem;
		v.push_back(elem);
	}
	Difference d(v);
	d.computeDifference();
	return 0;
}
