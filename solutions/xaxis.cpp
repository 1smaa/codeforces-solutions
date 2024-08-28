#include <iostream>
#include <algorithm>
int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int x1,x2,x3;
        std::cin>>x1>>x2>>x3;
        int s=std::min({x1,x2,x3});
        int e=std::max({x1,x2,x3});
        int min=0x3f3f3f3f;
        for(int m=s;m<=e;m++){
            int d=std::abs(x1-m)+std::abs(x2-m)+std::abs(x3-m);
            if(d<min) min=d;
        }
        std::cout<<min<<std::endl;
    }
    return 0;
}