#include <iostream>
#include <algorithm>
#include <cmath>

int raspberries(int arr[],int n,int k){
    std::sort(arr,arr+n);
    int max=-1;
    for(int i=0;i<n;++i){
        float div = static_cast<float>(arr[i]) / k;
        int d=(1-(div-std::floor(div)))*k;
        if(i==0||d<max) max=d;
        std::cout<<i<<std::endl;
    }
    return max;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        int arr[n];
        std::cin>>n>>k;
        for(int i=0;i<n;i++) std::cin>>arr[i];
        std::cout<<raspberries(arr,n,k)<<std::endl;
    }
    return 0;
}