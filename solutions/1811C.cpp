#include <iostream>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> b(n-1,0);
        for(int i=0;i<n-1;i++) std::cin>>b[i];
        std::vector<int> a(n,0);
        if(n==2) {std::cout<<"0 "<<b[0]<<std::endl; continue;}
        for(int i=0;i<n-1;i++){
            if(std::max(a[i],a[i+1])!=b[i]){
                if(i){
                    if(b[i]<=b[i-1]) a[i]=b[i];
                    else a[i+1]=b[i];
                } else a[i]=b[i];
            }
        }
        for(int i=0;i<n;i++) std::cout<<a[i]<<" ";
        std::cout<<std::endl;
    }
    return 0;
}