#include <iostream>

using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        while(k--){
            //cout<<"Partial > "<<x<<endl;
            if((x-1)%3==0&&((x-1)/3)%2==1){
                x=(x-1)/3;
            } else {
                x*=2;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}