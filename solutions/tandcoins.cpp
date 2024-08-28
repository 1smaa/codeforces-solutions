#include <iostream>
#include <string>

int solve(std::string s,int n){
    int index=0;
    int coins=0;
    while(index<n){
        if(s[index]=='*') return coins;
        if(s[index]=='@') coins++;
        if(index<n-1){
            if(s[index+1]=='*') index++;
        }
        index++;
    }
    return coins;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        std::cout<<solve(s,n)<<std::endl;
    }
    return 0;
}