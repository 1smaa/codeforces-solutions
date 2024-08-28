#include <iostream>

bool make_equal(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int avg=sum/n;
    int av=0;
    for(int i=0;i<n;i++){
        av+=arr[i]-avg;
        if(av<0) return false;
    }
    return av==0;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int arr[n];
        int b;
        for(int i=0;i<n;i++){
            std::cin>>b;
            arr[i]=b;
        }
        std::cout<<(make_equal(arr,n) ? "YES" : "NO")<<std::endl;
    }
    return 0;
}