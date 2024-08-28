#include <iostream>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> arr(n,0);
        for(int i=0;i<n;i++) std::cin>>arr[i];
        int pg=arr[arr.size()-1];
        int max=arr[0];
        for(int i=0;i<n-1;i++){
            if(arr[i]>max) max=arr[i];
        }
        std::cout<<pg+max<<std::endl;
    }
    return 0;
}