#include <iostream>
#include <algorithm>

int sumgame(int arr[],int n,int k,int x){
    if(k>=n) return 0;
    std::sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<(n-k-x);i++){
        sum+=arr[i];
    }
    for(int i=n-k-x;i<(n-k);i++){
        sum-=arr[i];
    }
    return sum;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k,x;
        std::cin>>n>>k>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
        }
        std::cout<<sumgame(arr,n,k,x)<<std::endl;
    }
    return 0;
}