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
    int n1,n2;
    cin>>n1>>n2;
    vector<bool> arrived(3,false);
    arrived[n1-1]=true;
    arrived[n2-1]=true;
    for(int i=0;i<3;i++){
        if(!arrived[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}