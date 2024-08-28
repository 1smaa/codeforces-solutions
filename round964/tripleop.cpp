#include <iostream>
#include <cmath>
#include <vector>

#define ll long long

int main(void){
    std::cin.tie(0) -> std::ios::sync_with_stdio(false);
    int t;
    std::cin>>t;
    while(t--){
        int l,r;
        std::cin>>l>>r;
        int res=0;
        ll nl=l;
        while(nl>0){
            nl/=3;
            res++;
        }
        int back=res;
        std::vector<int> powers{static_cast<int>(pow(3,(floor(log(l)/log(3)))+1))};
        int ind=0;
        while(powers[ind]<=r) powers.push_back(powers[ind++]*3);
        res*=2;
        ind=0;
        int i=l+1;
        while(i<r){
            res+=(back*((ind==powers.size()-1 ? r : powers[ind])-i));
            i=(ind==powers.size()-1 ? r : powers[ind++]);
            back++;
        }
        std::cout<<res<<std::endl;
    }
    return 0;
}