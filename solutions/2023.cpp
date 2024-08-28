#include <iostream>

void solution(int arr[],int n,int b){
    int mul=1;
    for(int i=0;i<n;i++){
        mul*=arr[i];
        if((2023%arr[i]!=0)||(2023%mul!=0)){
            std::cout<<"NO"<<std::endl;
            return;
        }
    }
    std::cout<<"YES"<<std::endl<<(2023/mul);
    b--;
    while(b--){
        std::cout<<" 1";
    }
    std::cout<<std::endl;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,b;
        std::cin>>n>>b;
        int arr[n];
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
        }
        solution(arr,n,b);
    }
    return 0;
}