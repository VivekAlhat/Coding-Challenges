#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string num = to_string(n);
	if(num.length()>3){
	    cout<<"More than 3 digits\n";
	}else{
	    cout<<num.length()<<endl;
	}
	return 0;
}

