#include <iostream>
#include <vector>

int main(void){
    int n;
    std::cin>>n;
    while(n--){
        int cx,cy;
        std::cin>>cx>>cy;
        bool res=false;
        if(cy>=0) res=true;
        else{
            res=abs(cx)>=(abs(cy)+abs(cx)-1);
        }
        //std::cout<<cx<<" "<<abs(cy)+1<<std::endl;
        std::cout<<(res ? "YES" : "NO")<<std::endl;
    }
    return 0;
}
/*15
-7 -7
-7 -6
-7 -5
-7 -4
-7 -3
-7 -2
-7 -1
-7 0
-7 1
-7 2
-7 3
-7 4
-7 5
-7 6
-7 7*/