#include <iostream>
#include <map>
#include <string>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++) std::cin>>a[i];
        int m;
        std::cin>>m;
        std::vector<std::string> s(m,"");
        for(int i=0;i<m;i++) std::cin>>s[i];
        for(int i=0;i<m;i++){
            if(s[i].length()!=a.size()) std::cout<<"NO"<<std::endl;
            else {
                std::map<int,char> m1{};
                std::map<char,int> m2{};
                bool valid=true;
                for(int j=0;j<s[i].length()&&valid;j++){
                    int number=a[j];
                    char charac=s[i][j];
                    if((!m1.count(number))&&(!m2.count(charac))){
                        m1[number]=charac;
                        m2[charac]=number;
                    } else {
                        if((m1.count(number)&&m1[number]!=charac)||(m2.count(charac)&&m2[charac]!=number)) valid=false;
                    }
                }
                std::cout<<(valid ? "YES" : "NO")<<std::endl;
            }
        }
    }
}