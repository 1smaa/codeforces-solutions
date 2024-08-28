#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

#define IPAIR std::pair<int,int>

bool pred(const IPAIR& p1, const IPAIR& p2){
    return std::abs(p1.first)<std::abs(p2.first);
}

int main(void){
    int n;
    std::cin>>n;
    std::vector<IPAIR> vp{},vn{};
    for(int i=0;i<n;i++){
        IPAIR p;
        std::cin>>p.first>>p.second;
        if(p.first>0) vp.push_back(p);
        else vn.push_back(p);
    }
    std::sort(vp.begin(),vp.end(),pred);
    std::sort(vn.begin(),vn.end(),pred);
    bool pos=false,run1=true,run2=true;
    int ip1=0,in1=0,ip2=0,in2=0;
    int count1=0,count2=0;
    while(run1||run2){
        if(pos){
            if(ip1<vp.size()&&run1)   count1+=vp[ip1].second;
            else run1=false;
            if(in2<vn.size()&&run2)   count2+=vn[in2].second;
            else run2=false;
            ip1++; in2++;
        } else {
            if(in1<vn.size()&&run1)   count1+=vn[in1].second;
            else run1=false;
            if(ip2<vp.size()&&run2)   count2+=vp[ip2].second;
            else run2=false;
            ip2++; in1++;
        }
        pos=!pos;
    }
    std::cout<<std::max(count1,count2)<<std::endl;
    return 0;
}