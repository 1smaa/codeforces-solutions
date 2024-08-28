#include <iostream>
#include <string>

int count(std::string s,char c){
    int n=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=c) n++;
    }
    return n;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        if(count(s,'W')==1) std::cout<<"NO"<<std::endl;
        else{
            bool valid=true;
            int c=0;
            c=(s[0]=='W' ? 0 : 1);
            char last='W';
            for(int i=1;i<n&&valid;i++){
                //std::cout<<s[i]<<c<<std::endl;
                if(s[i]==s[i-1]) c++;
                else{
                    if(s[i]=='W'&&s[i-1]!='W'&&last=='W') valid=false;
                    c=1;
                    last=s[i-1];
                }
            }
            if(s[n-1]!='W'&&last=='W') valid=false;
            std::cout<<(valid ? "YES" : "NO")<<std::endl;
        }
    }
    return 0;
}