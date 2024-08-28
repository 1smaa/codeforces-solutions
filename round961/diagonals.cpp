#include <iostream>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        int res;
        if(k==0){
            res=0;
        } else if(k>=(n*n)){
            res=(n*2)-1;
        } else{
            int i=n-1;
            k-=n;
            int count=1;
            while(k>0&&i>0){
                k-=i;
                count++;
                if(k>0){
                    k-=i;
                    count++;
                }
                i--;
            }
            res=count;
        }
        std::cout<<res<<std::endl;
    }
}