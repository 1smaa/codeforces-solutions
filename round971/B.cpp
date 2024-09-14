#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>
#include <queue>

#define ll long long
#define INF 0x7fffffff
#define MINF 0xffffffff
#define IPAIR pair<int,int>
using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> s(n,"");
        for(int i=0;i<n;i++) cin>>s[i];
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<4;j++){
                if(s[i][j]=='#'){
                    cout<<j+1<<" "; break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}