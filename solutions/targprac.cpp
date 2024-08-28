#include <iostream>
#include <vector>
#include <string>
int main(void){
    int t;
    std::cin>>t;
    while(t--){
        std::vector<std::string> targ{};
        for(int i=0;i<10;i++){
            std::string s;
            std::cin>>s;
            targ.push_back(s);
        }
        int p=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(targ[i][j]=='X'){
                    
                }
            }
        }
        std::cout<<p<<std::endl;
    }
    return 0;
}