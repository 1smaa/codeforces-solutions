#include <iostream>
#include <string>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        std::string x;
        std::cin>>x;
        bool done=false;
        for(int i=x.length()-1;i>=1&&!done;i--){
            if((x[i]-'0')+(x[i-1]-'0')>=10){
                x[i]=(x[i]-'0'+x[i-1]-'0'-10)+'0';
                x[i-1]='1';
                done=true;
            }
        }
        if(!done){
            char sum=x[0]-'0'+x[1];
            std::string res=x.substr(2,x.length()-2);
            res=sum+res;
            x=res;
        }
        std::cout<<x<<std::endl;
    }
    return 0;
}