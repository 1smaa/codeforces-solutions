#include <iostream>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) std::cin>>arr[i];
        if(n%2){
            std::cout<<"4"<<std::endl<<"1 "<<n<<std::endl<<"2 "<<n<<std::endl<<"1 2"<<std::endl<<"1 2"<<std::endl;
        }else{
            std::cout<<"2"<<std::endl<<"1 "<<n<<std::endl<<"1 "<<n<<std::endl;
        }
    }
}