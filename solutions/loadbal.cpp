#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main(void){
    int n;
    std::cin>>n;
    std::vector<int> serv(n,0);
    for(int i=0;i<n;i++) std::cin>>serv[i];
    int sum=0;
    std::vector<int> rel{};
    for(int i=0;i<n;i++){ 
        sum+=serv[i];
    }
    float med=sum/n;
    for(int i=0;i<n;i++){
        rel.push_back(serv[i]-med);
    }
    std::sort(rel.begin(),rel.end());
    int count=0,b=0,e=n-1;
    while((e-b)&&(rel[b]<0&&rel[e]>0)){
        if(-rel[b]>rel[e]){
            rel[b]+=rel[e];
            count+=rel[e];
            e--;
        } else if(-rel[b]<rel[e]){
            rel[e]-=rel[b];
            count-=rel[b];
            b++;
        } else {
            count+=rel[e];
            b++; e--;
        }
    }
    std::cout<<count<<std::endl;
}