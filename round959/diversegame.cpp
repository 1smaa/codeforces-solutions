#include <iostream>
#include <vector>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n,m;
        std::cin>>n>>m;
        std::vector<std::vector<int>> mat(n,std::vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) std::cin>>mat[i][j];
        }
        std::vector<std::vector<int>> newMat(n,std::vector<int>(m,0));
        if(n==m&&n==1) std::cout<<-1<<std::endl;
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    int newI=(i+1)%n;
                    int newJ=(j+(newI ? 0 : 1))%m;
                    newMat[newI][newJ]=mat[i][j];
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++) std::cout<<newMat[i][j]<<" ";
                std::cout<<std::endl;
            }
        }
    }
    return 0;
}