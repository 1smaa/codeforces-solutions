#include <iostream>
#include <cmath>

int twodivisors(int a,int b){
    double frac=static_cast<double>(b % a) / static_cast<double>(a);
    if(frac==0.0) return b*2;
    double mul=1;
    while(frac!=0.0){
        frac = 1 / frac;
        mul*=frac;
        frac -= std::floor(frac);
    }
    return b*mul;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int a,b;
        std::cin>>a>>b;
        std::cout<<twodivisors(a,b)<<std::endl;
    }
    return 0;
}