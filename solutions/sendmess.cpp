#include <iostream>

bool solve(int arr[],int n,int f,int a,int b){
    long long diff;
    for(int i=0;i<n;i++){
        if(i==0) diff=arr[i];
        else diff=arr[i]-arr[i-1];
        f-=std::min((diff*a),(long long)b);
        if(f<=0) return false;
    }
    return true;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,f,a,b;
        std::cin>>n>>f>>a>>b;
        int arr[n];
        for(int i=0;i<n;i++) std::cin>>arr[i];
        std::cout<<(solve(arr,n,f,a,b) ? "YES" : "NO")<<std::endl;
    }
    return 0;
}