#include <iostream>
#include <algorithm>

int solve(int a[],int n){
    std::sort(a,a+n);
    int b=0;
    for(int i=1;i<n;i++){
        b+=a[i]-a[i-1];
    }
    return b;
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