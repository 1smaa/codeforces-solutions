#include <iostream>
#include <string>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        char c;
        std::cin>>n>>c;
        std::string s;
        std::cin>>s;
        if(c=='g'){
            std::cout<<"0"<<std::endl;
            continue;
        }
        std::vector<int> greens{};
        std::vector<int> currs{};
        for(int i=0;i<s.length();i++){
            if(s[i]==c) currs.push_back(i);
            else if(s[i]=='g') greens.push_back(i);
        }
        int i=0,j=0;
        int max=0;
        while(j<currs.size()){
            while(greens[i%greens.size()]+(s.length()*(i/greens.size()))<currs[j]) {
                i++;
            }
            //std::cout<<greens[i%greens.size()]<<" "<<currs[j]<<std::endl;
            int d=greens[i%greens.size()]+(s.length()*(i/greens.size()))-currs[j];
            if(d>max) max=d;
            j++;
        }
        std::cout<<max<<std::endl;
    }
}