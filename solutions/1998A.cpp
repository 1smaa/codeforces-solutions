#include <iostream>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int x,y,k;
        std::cin>>x>>y>>k;
        if(x==y&&x==0){
            if(k%2){
                std::cout<<"0 0"<<std::endl;
                k--;
            }
            for(int i=1;i<=k/2;i++){
                std::cout<<i<<" "<<i<<std::endl;
                std::cout<<-i<<" "<<-i<<std::endl;
            }
            continue;
        }
        int tsumx=x*k;
        int tsumy=y*k;
        std::cout<<tsumx<<" "<<tsumy<<std::endl;
        k--;
        if(!k) continue;
        else if(k%2){
            //std::cout<<"First"<<std::endl;
            int sum=0;
            int i=std::max(tsumx,tsumy)+1;
            while(k>1){
                std::cout<<i<<" "<<i<<std::endl;
                sum+=(i++);
                k--;
            }
            std::cout<<-sum<<" "<<-sum<<std::endl;
        } else {
            //std::cout<<"Second"<<std::endl;
            int i=1;
            while(k>0){
                if(i==tsumx&&i==tsumy){
                    std::cout<<-i<<" "<<i<<std::endl;
                    std::cout<<i<<" "<<-i<<std::endl;
                } else {
                    std::cout<<i<<" "<<i<<std::endl;
                    std::cout<<-i<<" "<<-i<<std::endl;
                }
                k-=2;
                i++;
            }
        }
    }
    return 0;
}