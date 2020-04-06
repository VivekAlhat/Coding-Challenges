#include <bits/stdc++.h>
using namespace std;

int main(){
  freopen("sitin.txt", "r", stdin);
  freopen("sitout.txt", "w", stdout);

  long long r,s,tickets,standing=0,sitting=0;
  cin>>r>>s;
  cin>>tickets;

  long long total_seats = r * s;
  if(tickets<=total_seats){
    sitting = tickets;
    standing = 0;
  }else{
    standing = tickets - total_seats;
    sitting = total_seats;
  }

  cout<<sitting<<" "<<standing<<endl;
  return 0;
}
