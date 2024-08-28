#include <iostream>
#include <string>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        int c=0;
        for(int i=0;i<n-2;i++){
            std::string e=s.substr(i,3);
            //std::cout<<e<<std::endl;
            if(e=="pie"||e=="map") c++;
            if(e=="map"&&(i<n-5&&s.substr(i+2,3)=="pie")) c--;
        }
        std::cout<<c<<std::endl;
    }
}