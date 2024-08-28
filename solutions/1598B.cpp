#include <iostream>
#include <vector>

#define G 5

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int n;
        std::cin>>n;
        std::vector<std::vector<int>> v(n,std::vector<int>(G,0));
        for(int i=0;i<n;i++)
            for(int j=0;j<G;j++) std::cin>>v[i][j];
        bool done=false;
        for(int i=0;i<G-1&&!done;i++){
            for(int j=i+1;j<G&&!done;j++){
                bool val=true;
                int cs=0,cd=0;
                for(int k=0;k<n&&val;k++){
                    if(v[k][i]) cs++;
                    if(v[k][j]) cd++;
                    if(!v[k][i]&&!v[k][j]) val=false;
                }
                if(val&&(cs>=n/2&&cd>=n/2)) done=true;
            }
        }
        std::cout<<(done ? "YES" : "NO")<<std::endl;
    }
    return 0;
}