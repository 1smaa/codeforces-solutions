#include <iostream>
#include <vector>

int main(void){
    int n;
    std::cin>>n;
    std::vector<int> res{};
    std::cout<<n;
    while(n!=1){
        int i=2;
        while(n%i&&i<n) i++;
        n/=i;
        std::cout<<" "<<n;
    }
    return 0;
}