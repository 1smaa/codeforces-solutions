#include <iostream>
#include <vector>

int check_adj(std::vector<std::vector<int>>& mat,int x,int y,int n,int m){
    std::vector<std::pair<int,int>> poss={
        {-1,0},{0,-1},{0,1},{1,0}
    };
    int max=-1;
    for(int i=0;i<poss.size();i++){
        int newX=x+poss[i].first;
        int newY=y+poss[i].second;
        if((newX>=0&&newX<n)&&(newY>=0&&newY<m)){
            if(mat[newX][newY]>max) max=mat[newX][newY];
        }
    }
    if(max<mat[x][y]) return max;
    else return mat[x][y];
}

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
        bool c=true;
        while(c){
            c=false;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    mat[i][j]=check_adj(mat,i,j,n,m);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) std::cout<<mat[i][j]<<" ";
            std::cout<<std::endl;
        }
    }
    return 0;
}