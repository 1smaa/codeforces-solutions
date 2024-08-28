#include <iostream>

int solve(int n,int k){
    int p=0;
    int d=0;
    while(d<k){
        p++;
        d+=2;
    }
    return p;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        std::cout<<solve(n,k)<<std::endl;
    }
    return 0;
}