#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long
#define MASK 0x0000000000000001

void decrementBinaryNumber(std::vector<bool>& binary) {
    bool borrow = true;
    for (int i=binary.size()-1;i>=0&&borrow;i--) {
        if (binary[i]) {
            binary[i]=false;
            borrow=false;
        } else {
            binary[i]=true;
        }
    }
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        ll n;
        std::cin>>n;
        std::vector<ll> res{};
        int nOnes=0;
        int og=n;
        while (n) {
            n = n & (n - 1);
            nOnes++;
        }
        n=og;
        for(int j=0;j<nOnes;j++){
            int c=0;
            int p=n;
            for(int i=63;i>=0;i--){
                if(p & (MASK << i)){
                    if(c==nOnes-j){
                        p&=~(MASK << i);
                    }
                    c++;
                }
            }
            res.push_back(p);
        }
        std::sort(res.begin(),res.end());
        std::cout<<(res.size()==1 ? res.size() : res.size()+1)<<std::endl;
        for(int i=0;i<res.size();i++) {
            if(res[i]>0) std::cout<<res[i]<<" ";
        }
        std::cout<<n<<std::endl;
    }
    return 0;
}