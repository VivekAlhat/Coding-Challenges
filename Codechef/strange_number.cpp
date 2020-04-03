#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int ans(int);

int main(){
        ll t,x,k;
        cin>>t;
        while(t--) {
                cin>>x>>k;
                int cnt = ans(x);
                cout<<(k<=cnt) ? 1 : 0;
                cout<<"\n";
        }
}

int ans(int n){
        int count = 0;
        while (n % 2 == 0) {
                count+=1;
                n = n/2;
        }

        for (int i = 3; i <= sqrt(n); i = i + 2) {
                while (n % i == 0) {
                        count+=1;
                        n = n/i;
                }
        }

        if (n > 2) {
                count+=1;
        }

        return count;
}
