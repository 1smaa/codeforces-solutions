#include <iostream>
#include <string>
#include <vector>
int main(void){
    int n;
    std::cin>>n;
    while(n--){
        int n,m;
        std::cin>>n>>m;
        std::vector<std::string> arr(n);
        for(int i=0;i<n;i++) std::cin>>arr[i];
        int lastcount=0,laststart=-1;
        int x=-1,y=-1;
        for(int i=0;i<n;i++){
            int hcount=0;
            int start=-1;
            for(int j=0;j<arr[i].length();j++){
                if(arr[i][j]=='#') {
                    if(start==-1) start=j;
                    hcount++;
                }
            }
            if(hcount<lastcount){
                //std::cout<<"Hey "<<i<<" "<<laststart<<" "<<lastcount<<std::endl;
                x=i-1;
                y=laststart+(lastcount/2);
                break;
            }
            lastcount=hcount;
            laststart=start;
        }
        if(x==-1){
            x=n-1;
            y=laststart;
        }
        std::cout<<x+1<<" "<<y+1<<std::endl;
    }
    return 0;
}