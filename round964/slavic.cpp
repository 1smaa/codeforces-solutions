#include <iostream>
#include <string>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        std::string s,t;
        std::cin>>s>>t;
        std::vector<bool> check(t.length(),false);
        int ind=0;
        std::string r="";
        for(int i=0;i<s.size();i++){
            if(ind<t.length()&&(s[i]==t[ind]||s[i]=='?')) {
                r+=t[ind];
                check[ind++]=true;
            } else if(ind==t.length()&&s[i]=='?') r+="a";
            else r+=s[i];
        }
        bool res=true;
        for(int i=0;i<check.size();i++) res&=check[i];
        if(res){
            std::cout<<"YES\n"<<r<<std::endl;
        } else {
            std::cout<<"NO"<<std::endl;
        }
    }
    return 0;
}