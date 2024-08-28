#include <iostream>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        std::cout<<(k*(n-1))+1<<std::endl;
    }
}