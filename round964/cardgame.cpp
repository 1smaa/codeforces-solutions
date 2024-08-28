#include <iostream>

int main(void){
    int t;
    std::cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        std::cin>>a1>>a2>>b1>>b2;
        int n=0;
        if(b1>b2){
            int aux=b1;
            b1=b2;
            b2=aux;
        }
        if(a1>a2){
            int aux=a1;
            a1=a2;
            a2=aux;
        }
        if(a1==b1&&a2==b2) n=0;
        else if(a1>=b2) n=4;
        else if(a1>b1&&a2>b2&&a1<b2) n=2;
        else if(a1==b1&&a2>b2) n=2;
        else if(a2==b2&&a1>b1) n=2;
        else n=0;
        std::cout<<n<<std::endl;
    }
    return 0;
}