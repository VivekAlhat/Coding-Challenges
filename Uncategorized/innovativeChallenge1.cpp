// Pair-Sum problem
#include <iostream>
using namespace std;

int main(int argc, const char **argv){
    int N,M;
    int arr[N];
    cin>>N;
    if(N<=0 || N>1000){  // Array Input
        cout<<"Size should be between 1 and 1000"<<endl;
        exit(0);
    }
    else{
        for (int i=0; i<N; i++){
            cin>>arr[i];
        }
    }
    cin>>M; // Target Number
    cout<<"Output :"<<endl;
    for (int i=0; i<N; i++){
        for (int j=i; j<N; j++){
            if(arr[i] + arr[j] == M){
                cout<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}
