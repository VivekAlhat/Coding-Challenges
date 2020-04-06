#include <bits/stdc++.h>
using namespace std;

bool isOdd(int);

int main(){
        int t;
        cin>>t;
        while(t--) {
                int num;
                bool val;
                cin>>num;

                // if there is only one page
                if(num==1) {
                        cout<<"1"<<endl<<"1 1"<<endl;
                        break;
                }
                int ans = sqrt(num);
                cout<<ans<<endl;
                for(int i=0; i<ans; ++i) {
                        val = isOdd(num);
                        if(val && i==0) {
                                cout<<"3";
                        }else{
                                cout<<"2";
                        }
                        cout<<" "<<(i*2+1)<<" "<<(i*2+2);
                        if(val) {
                                if(i==0) cout<<" "<<num;
                        }
                        cout<<endl;
                }
                return 0;
        }
}

bool isOdd(int n){
        bool res = n & 1;
        return res;
}
