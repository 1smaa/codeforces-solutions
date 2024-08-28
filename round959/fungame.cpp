#include <iostream>
#include <string>

int main(void){
    int q;
    std::cin>>q;
    while(q--){
        int n;
        std::cin>>n;
        std::string s,t;
        std::cin>>s>>t;
        bool seeno=false;
        bool valid=true;
        for(int i=0;i<n&&valid;i++){
            if(s[i]=='1') seeno=true;
            if(s[i]!=t[i]){
                if(!seeno) valid=false;
            }
        }
        std::cout<<(valid ? "YES" : "NO")<<std::endl;
    }
    return 0;
}