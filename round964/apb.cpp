#include <iostream>
#include <string>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        std::string s;
        std::cin>>s;
        int sum=0;
        for(int i=0;i<s.length();i++) sum+=std::stoi(s.substr(i,1));
        std::cout<<sum<<std::endl;
    }
    return 0;
}