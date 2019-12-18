/* Create a program to accept any number and print multiplication table of it */

#include<iostream>
using namespace std;

int main(int argc,const char **argv) {
  int n = 0;
  cin>>n;
  for(int i = 1; i<=10; i++){
    cout<<n*i<<endl;
  }
  return 0;
}
