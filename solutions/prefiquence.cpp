#include <iostream>
#include <string>
int main(void){
    int n;
    std::cin>>n;
    while(n--){
        int n,m;
        std::cin>>n>>m;
        std::string a,b;
        std::cin>>a>>b;
        int i=0,j=0;
        while(i<n){
            while(j<m&&a[i]!=b[j]) j++;
            if(j==m) break;
            else {
                i++; 
                j++;
            }
        }
        std::cout<<i<<std::endl;
    }
}