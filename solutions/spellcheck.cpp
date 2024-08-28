#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(void){
    std::string s,d;
    std::cin>>s>>d;
    int i=0,j=0;
    std::vector<char> to_del{};
    while(i<s.length()&&j<d.length()){
        if(s[i]!=d[j]) {
            break;
        }
        i++; j++;
    }
    
}