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
        int l,r;
        cin>>l>>r;
        int diff=0,count=0;
        while(l<=r){
            l+=diff++;
            if(l<=r) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}