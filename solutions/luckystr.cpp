#include <iostream>
#include <map>
#include <string>
#include <vector>
int main(void){
    int n;
    std::cin>>n;
    std::map<int,std::vector<char>> d;
    int index=0;
    std::string r="";
    for(int i=0;i<n;i++){
        char c1='0',c2='0';
        if(i>=4){
            c1=r[i-4];
        } else if(i>=7){
            c2=r[i-7];
        }
        if(c1<c2){
            r+=c1;
        } else if(c2>c1){
            r+=c2;
        } else if(c1=='0'){
            r+=(char)(97+index++);
        } else {
            r+=c1;
        }
    }
    std::cout<<r<<std::endl;
}