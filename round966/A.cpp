#include <iostream>
#include <string>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        std::string n;
        std::cin>>n;
        if(n.length()<3||n.substr(0,2)!="10"||n[2]=='0') std::cout<<"NO"<<std::endl;
        else{
            if(std::stoi(n.substr(2,n.length()-2))>=2) std::cout<<"YES"<<std::endl;
            else std::cout<<"NO"<<std::endl;
        }
    }
    return 0;
}