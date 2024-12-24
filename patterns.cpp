
#include <iostream>
using namespace std;

void pattern1( int n){
    for (int i=n;i>=0;i--){
        for(int j=n;j>i-n;j--){
            cout<<" ";
        }
        for(int k=i*2+1;k>0;k--){
            cout<<"*";
        }
        for(int l=n;l>i-n;l--){
            cout<<" ";
        }
        cout<<endl;
}
};


int main(){
    int n;
    cin>>n;
    pattern1(n);
    return 0;
};