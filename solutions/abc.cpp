#include <iostream>
#include <vector>
#include <string>

std::vector<std::pair<int,int>> generate_poss(std::vector<std::string>& m,int x,int y,std::vector<std::vector<bool>>& visited){
    std::vector<std::pair<int,int>> adjacentCoordinates{};
    
    // Define the possible moves: up, down, left, right, and the four diagonals
    std::vector<std::pair<int, int>> moves = {
        {-1, 0},  // up
        {1, 0},   // down
        {0, -1},  // left
        {0, 1},   // right
        {-1, -1}, // up-left
        {-1, 1},  // up-right
        {1, -1},  // down-left
        {1, 1}    // down-right
    };
    
    for (const auto& move : moves) {
        int newX = x + move.first;
        int newY = y + move.second;
        
        // Check if the new coordinates are within the bounds of the 3x3 matrix
        if (((newX >= 0 && newX < 3) && (newY >= 0 && newY < 3)) && !visited[newX][newY]) {
            adjacentCoordinates.push_back(std::pair<int,int>(newX,newY));
        }
    }
    return adjacentCoordinates;
}

std::string recursion(std::vector<std::string>& m,int x,int y,std::string s,std::vector<std::vector<bool>> visited){
    if(s.length()==3) return s;
    else{
        std::vector<std::pair<int,int>> p=generate_poss(m,x,y,visited);
        std::string min="DDD";
        visited[x][y]=true;
        s+=m[x][y];
        for(int i=0;i<p.size();i++){
            std::string l=recursion(m,p[i].first,p[i].second,s,visited);
            if(l<min) min=l;
        }
        return min;
    }
}

int main(void){
    std::vector<std::string> m(3,"");
    std::cin>>m[0]>>m[1]>>m[2];
    std::string res="DDD";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            std::vector<std::vector<bool>> visited(3,std::vector<bool>(3,false));
            std::string r=recursion(m,i,j,"",visited);
            if(r<res) res=r;
        }
    }
    std::cout<<res<<std::endl;
    return 0;
}