#include <iostream>
#include <string>
#include <stack>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::string s;
        std::cin>>s;
        int open=0;
        int counto=0,countc=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') {counto++; open++;}
            else if(s[i]==')') {countc++; open--;}
            else{
                if(open>0){
                    s[i]=')';
                    open--;
                } else {s[i]='('; open++;};
            }
        }
        std::stack<int> inp{};
        //std::cout<<s<<std::endl;
        int cost=0;
        for(int i=0;i<s.length();i++){
            //std::cout<<i<<std::endl;
            if(s[i]=='(') inp.push(i);
            else {cost+=(i-inp.top()); inp.pop();}
        }
        std::cout<<cost<<std::endl;
    }
    return 0;
}