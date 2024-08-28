#include <iostream>
#include <algorithm>
bool solution(int a[],int b[],int n,int m,int k){
    bool ka[k], kb[k];
    int acount=0,bcount=0;
    for(int i=0;i<k;i++) {ka[i]=false; kb[i]=false;}
    for(int i=0;i<n;i++){
        if(a[i]<=k&&a[i]>0){
            if(!(ka[a[i]-1])) acount++;
            ka[a[i]-1]=true;
        }
    }
    for(int i=0;i<m;i++){
        if(b[i]<=k&&b[i]>0){
            if(!(kb[b[i]-1])) bcount++;
            kb[b[i]-1]=true;
        }
    }
    if((acount<(k/2))||(bcount<(k/2))) return false;
    int parity=0;
    for(int i=0;i<k;i++){
        //std::cout<<ka[i]<<" "<<kb[i]<<std::endl;
        if(!(ka[i]||kb[i])) return false;
        if(ka[i]&&kb[i]){
            acount--; bcount--; parity++;
        }
    }
    //std::cout<<"A: "<<acount<<" B: "<<bcount<<" Parity: "<<parity<<std::endl;
    int mi=std::min(acount,bcount);
    if(mi>=k/2) return true;
    int r=parity-(k/2)+mi;
    return (std::max(acount,bcount)+r)>=k/2;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,m,k;
        std::cin>>n>>m>>k;
        int a[n], b[m];
        for(int i=0;i<n;++i){
            std::cin>>a[i];
        }
        for(int i=0;i<m;++i){
            std::cin>>b[i];
        }
        std::cout<<(solution(a,b,n,m,k) ? "YES" : "NO")<<std::endl;
    }
    return 0;
}