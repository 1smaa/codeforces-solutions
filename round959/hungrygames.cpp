#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,x;
        std::cin>>n>>x;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++) std::cin>>a[i];
        int res=0;
        for(int i=0;i<n;i++){
            int g=0;
            for(int j=i;j<n;j++){
                g+=a[i];
                if(g<=x) res++;
                else {
                    g=0;
                }
            }
        }
        std::cout<<res<<std::endl;
    }
    return 0;
}