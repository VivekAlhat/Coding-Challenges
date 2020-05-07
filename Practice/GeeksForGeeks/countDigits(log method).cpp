// Couting digits in a given number using mathematical method

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int count = (log10(n)+1);
  cout<<count<<endl;
  return 0;
}


/*
  Time Complexity: O(1)
*/
