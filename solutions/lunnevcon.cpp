#include <iostream>
#include <numeric> 
int solve(int arr[],int n){
    int i=0,j=n-1;
    int x=0;
    while(i<j){
        int k=std::max(arr[i],arr[j])-std::min(arr[i],arr[j]);
        x=std::gcd(x,k);
        i++; j--;
    }
    return x;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) std::cin>>arr[i];
        std::cout<<solve(arr,n)<<std::endl;
    }
}