#include <iostream>
#include <string>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        std::string s;
        std::cin>>s;
        int nw=0;
        for(int i=0;i<k;i++){
            if(s[i]=='W') nw++;
        }
        int min=nw;
        for(int i=k;i<n;i++){
            if(s[i]=='W'&&s[i-k]=='B') nw++;
            if(s[i]=='B'&&s[i-k]=='W') nw--;
            if(nw<min) min=nw;
        }
        std::cout<<min<<std::endl;
    }
    return 0;
}