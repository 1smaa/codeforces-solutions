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
#define MOD 1000000007

using namespace std;

int main(void){
    cin.tie(nullptr) -> sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int c=k/2;
        int nodd;
        if((n-k+1)%2) nodd=n-c;
        else nodd=c;
        cout<<((nodd%2) ? "NO" : "YES")<<endl;
    }
    return 0;
}