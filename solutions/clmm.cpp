#include <iostream>
#include <algorithm>
#include <map>


void solve(int arr[],int n){
    std::sort(arr,arr+n);
    std::map<int,int> m;
    for(int i=0;i<n;i++) m[arr[i]]++;
    for(auto it=m.begin();it!=m.end();++it){
        if((*it).second>n/2){
            std::cout<<"NO"<<std::endl;
            return;
        }
    }
    std::cout<<"YES"<<std::endl;
    for(int i=0;i<n/2;i++){
        std::cout<<arr[i]<<" "<<arr[i+(n/2)]<<" ";
    }
    std::cout<<std::endl;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) std::cin>>arr[i];
        solve(arr,n);
    }
    return 0;
}