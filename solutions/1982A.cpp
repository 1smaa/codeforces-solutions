#include <iostream>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int x1,y1;
        std::cin>>x1>>y1;
        int x2,y2;
        std::cin>>x2>>y2;
        if(x1<y1&&x2>y2) std::cout<<"NO"<<std::endl;
        else if(x1>y1&&x2<y2) std::cout<<"NO"<<std::endl;
        else std::cout<<"YES"<<std::endl;
    }
    return 0;
}