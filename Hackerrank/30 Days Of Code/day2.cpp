#include<bits/stdc++.h>
using namespace std;

int main(int argc,const char** argv){
	double mealCost,total;
	int tip,tax;
	cin>>mealCost>>tip>>tax;
	double ntip = mealCost * tip/100;
	double ntax = mealCost * tax/100;
	total = mealCost + ntip + ntax;
	cout<<round(total)<<endl;
	return 0;
}
