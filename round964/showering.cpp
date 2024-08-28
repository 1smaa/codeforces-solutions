#include <iostream>
#include <vector>
#define IPAIR std::pair<int,int>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,s,m;
        std::cin>>n>>s>>m;
        std::vector<IPAIR> intervals(n,IPAIR(0,0));
        for(int i=0;i<n;i++){
            std::cin>>intervals[i].first>>intervals[i].second;
        }
        int e=0;
        bool can=false;
        for(int i=0;i<n&&!can;i++){
            if(intervals[i].first-e>=s) can=true;
            e=intervals[i].second;
        }
        if(!can&&m-intervals[n-1].second>=s) can=true;
        std::cout<<(can ? "YES" : "NO")<<std::endl;
    }
    return 0;
}