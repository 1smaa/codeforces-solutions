#include <iostream>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> v=solve(n);
        for(int i=0;i<v.size();i++){
            std::cout<<v[i]<<(i==v.size()-1 ? "" : " ");
        }
        std::cout<<std::endl;
    }
}