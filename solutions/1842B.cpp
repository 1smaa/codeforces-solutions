#include <iostream>
#include <vector>

#define MASK 0x00000001

std::vector<bool> complete(std::vector<bool>& start,int x){
    std::vector<bool> res{};
    for(int i=0;i<32;i++){
        if(!start[31-i] & (x & MASK<<i)) return std::vector<bool>{};
        else if(start[31-i] & (x & MASK<<i)) res.push_back(true);
        else res.push_back(start[31-i]);
        std::cout<<res[res.size()-1];
    }
    std::cout<<std::endl;
    return res;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,x;
        std::cin>>n>>x;
        std::vector<std::vector<int>> stacks(3,std::vector<int>(n,0));
        for(int i=0;i<3;i++){
            for(int j=0;j<n;j++) std::cin>>stacks[i][j];
        }
        int i=0,j=0,k=0;
        std::vector<bool> checked{};
        for(int ls=0;ls<32;ls++){
            if(x & (MASK << ls)) checked.push_back(true);
            else checked.push_back(false);
        }
        std::vector<bool> og=checked;
        bool valid=true;
        while((i<n||j<n||k<n)&&valid){
            std::vector<bool> v1{};
            std::vector<bool> v2{};
            std::vector<bool> v3{};
            if(i<n) v1=complete(checked,stacks[0][i]);
            if(j<n) v2=complete(checked,stacks[1][j]);
            if(k<n) v3=complete(checked,stacks[2][k]);
            if(!(v1.size())&&!(v2.size())&&!(v3.size())) valid=false;
            int n1=0,n2=0,n3=0;
            for(int ls=0;ls<v1.size();ls++){
                if(v1[ls]) n1++;
            }
            for(int ls=0;ls<v2.size();ls++){
                if(v2[ls]) n2++;
            }
            for(int ls=0;ls<v3.size();ls++){
                if(v3[ls]) n3++;
            }
            std::cout<<n1<<" "<<n2<<" "<<n3<<std::endl;
            if(n1>=n2&&n1>=n3) {checked=v1; i++;}
            else if(n2>=n1&&n2>=n3) {checked=v2; j++;}
            else {checked=v3; k++;}
        }
        if(i==n&&j==n&&k==n) valid=false;
        std::cout<<(valid ? "YES" : "NO")<<std::endl;
    }
}