#include <iostream>
#include <queue>
#include <utility>

#define IPAIR std::pair<int,int>

class Compare{
public:
    bool operator()(IPAIR below,IPAIR above){
        return std::abs(below.first)>=std::abs(above.first);
    }
};

bool solve(int a[],int x[],int n,int k){
    std::priority_queue<IPAIR,std::vector<IPAIR>,Compare> pq;
    for(int i=0;i<n;++i){
        pq.push(IPAIR(x[i],a[i]));
    }
    int t=0;
    while(!pq.empty()){
        if((std::abs(pq.top().first)-t)<=0) return false;
        t++;
        int ki=k;
        while(ki>0&&!pq.empty()){
            IPAIR p=pq.top();
            int s=p.second;
            p.second-=ki;
            ki-=s;
            pq.pop();
            if(p.second>0) {pq.push(p);}
        }
    }
    return true;
}

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,k;
        std::cin>>n>>k;
        int a[n],x[n];
        for(int i=0;i<n;i++) std::cin>>a[i];
        for(int i=0;i<n;i++) std::cin>>x[i];
        std::cout<<( solve(a,x,n,k) ? "YES" : "NO")<<std::endl;
    }
    return 0;
}