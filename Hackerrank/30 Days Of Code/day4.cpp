#include<bits/stdc++.h>
using namespace std;

class Person{
	public:
		int age;
	
	Person(int initialAge){
		if(initialAge<0){
			this->age = 0;
			cout<<"Age is not valid, setting age to 0."<<endl;
		}else{
			this->age = initialAge;
		}
	}
	
	void amIOld(){
		if(age<13){
			cout<<"You are young."<<endl;
		}else if(age>=13&&age<18){
			cout<<"You are a teenager."<<endl;
		}else{
			cout<<"You are old."<<endl;
		}
	}
	
	void yearPasses(){
		age++;
	}
};

int main(int argc,const char** argv){
	int t,age;
	cin>>t;
	while(t--){
		cin>>age;
		Person p(age);
		p.amIOld();
		for(int i=0;i<3;++i){
			p.yearPasses();
		}
		p.amIOld();
		cout<<"\n";
	}
	return 0;
}
