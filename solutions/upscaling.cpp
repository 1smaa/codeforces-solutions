#include <iostream>
#include <string>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::string s1="";
        std::string s2="";
        bool p=false;
        for(int i=0;i<2*n;i++){
            if(p){
                s1+=".";
                s2+="#";
            } else {
                s1+="#";
                s2+=".";
            }
            if(!((i-1)%2)) p=!p;
        }
        p=true;
        for(int i=0;i<n;i++){
            std::cout<<(p ? s1 : s2)<<std::endl<<(p ? s1 : s2)<<std::endl;
            p=!p;
        }
    }
    return 0;
}