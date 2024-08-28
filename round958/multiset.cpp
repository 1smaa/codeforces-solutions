#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        int nOnes=0;
        if(n==1){
            std::cout<<0<<std::endl;
        } else {
            int it=0;
            int og=n;
            while(nOnes<og){
                if(n<=k){
                    nOnes+=k;
                } else {
                    nOnes+=k-1;
                    n-=k-1;
                }
                it++;
                //std::cout<<"p"<<n<<" "<<it<<std::endl;
            }
            std::cout<<it<<std::endl;
        }
    }
    return 0;
}