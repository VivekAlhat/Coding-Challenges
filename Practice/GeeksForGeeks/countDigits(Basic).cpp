#include <iostream>
using namespace std;

int main(){
  int n, count=0;
  cin>>n;
  while(n!=0){
    n /= 10;  // Reduces the number by last integer after each iteration
    count++;
  }
  cout<<count<<endl;
  return 0;
}
