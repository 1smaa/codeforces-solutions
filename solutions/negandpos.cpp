#include <iostream>

int solve(int a[],int n){
    int sum=0;
    for(int i=0;i<n-1;++i){
        if(a[i]<0){

        } else {
            sum=a[i];
        }
    }
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