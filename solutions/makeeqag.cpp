#include <iostream>
#include <vector>
#include <map>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++) std::cin>>a[i];
        std::map<int,int> freq{};
        for(int i=0;i<n;i++) freq[a[i]]++;
        std::vector<int> maxN{};
        int max=-1;
        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second>max) {maxN=std::vector<int>{it->first}; max=it->second;}
            else if(it->second==max) {maxN.push_back(it->first);}
        }
        int min=0x3f3f3f3f;
        for(int i=0;i<maxN.size();i++){
            int cost=0;
            int coeff=0;
            bool tranche=true;
            for(int j=0;j<a.size();j++){
                if(a[j]!=maxN[i]&&tranche) {
                    coeff++;
                    tranche=false;
                }
                if(a[j]==maxN[i]) tranche=true;
            }
            cost=n-maxN[i]+coeff;
            if(cost<min) min=cost;
        }
        std::cout<<min<<std::endl;
    }
}