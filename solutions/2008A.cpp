#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>

#define ll long long
#define INF 0x3f3f3f3f
#define MINF 0xf3f3f3f3
#define IPAIR pair<int,int>
using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        bool valid=false;
        if(a%2==0&&b%2==0) valid=true;
        else if(b%2&&(a%2==0&&a>=2)) valid=true;
        cout<<(valid ? "YES" : "NO")<<endl;
    }
    return 0;
}