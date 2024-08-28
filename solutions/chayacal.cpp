#include <iostream>
#include <cmath>

int solve(int a[],int n){
    int y=a[0];
    for(int i=1;i<n;i++){
        y=(std::floor(y/static_cast<float>(a[i]))+1)*a[i];
    }
    return y;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int a[n];
        for(int i=0;i<n;++i) std::cin>>a[i];
        std::cout<<solve(a,n)<<std::endl;
    }
    return 0;
}