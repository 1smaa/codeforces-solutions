#include <iostream>
#include <string>

int solve(std::string s,int k){
    int h=std::stoi(s.substr(0,2));
    int m=std::stoi(s.substr(3,2));
    int ih=h,im=m;
    int palindromes=0;
    bool start=true;
    while(start||(ih!=h||im!=m)){
        std::string hs=std::to_string(h);
        std::string ms=std::to_string(m);
        bool p=true;
        for(int i=0;i<2;i++){
            if(hs[i]!=ms[1-i]) p=false;
        }
        if(p) palindromes++;
        m+=k;
        h+=(m/60);
        h=h%24;
        m=m%60;
        //std::cout<<h<<" "<<m<<std::endl;
        if(start) start=false;
    }
    return palindromes;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        std::string s;
        std::cin>>s;
        int k;
        std::cin>>k;
        std::cout<<solve(s,k)<<std::endl;
    }
    return 0;
}