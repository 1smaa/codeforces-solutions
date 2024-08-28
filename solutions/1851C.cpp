#include <iostream>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        std::vector<int> c(n,0);
        for(int i=0;i<n;i++) std::cin>>c[i];
        int counte=0,counti=0;
        int indi=0,inde=n-1;
        if(c[0]==c[n-1]){
            int count=0;
            for(int i=0;i<n;i++) if(c[i]==c[0]) count++;
            if(count>=k) std::cout<<"YES"<<std::endl;
            else std::cout<<"NO"<<std::endl;
            continue;
        }
        for(int i=0;i<n&&counti<k;i++){
            if(c[i]==c[0]) counti++;
            indi=i;
        }
        for(int i=n-1;i>=0&&counte<k;i--){
            if(c[i]==c[n-1]) counte++;
            inde=i;
        }
        if(counti==k&&counte==k&&indi<inde) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
    return 0;
}