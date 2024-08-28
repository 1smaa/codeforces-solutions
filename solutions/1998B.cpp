#include <iostream>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> p(n,0);
        for(int i=0;i<n;i++) std::cin>>p[i];
        for(int i=0;i<n;i++){
            std::cout<<(p[i]%n)+1<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}