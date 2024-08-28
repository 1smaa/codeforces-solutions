#include <iostream>
#include <cmath>

#define ll long long

int main(){
    int n,m,a;
    std::cin>>n>>m>>a;
    float af=static_cast<float>(a);
    ll w=std::ceil(n/af);
    ll h=std::ceil(m/af);
    ll ans=w*h;
    std::cout<<ans<<std::endl;
}