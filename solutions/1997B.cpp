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
        int n;
        cin>>n;
        int res=0;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=1;i<n-1;i++){
            if(s2[i]=='.'&&s1[i-1]=='.'&&s1[i+1]=='.'&&s2[i-1]=='x'&&s2[i+1]=='x') res++;
        }
        for(int i=1;i<n-1;i++){
            if(s1[i]=='.'&&s2[i-1]=='.'&&s2[i+1]=='.'&&s1[i-1]=='x'&&s1[i+1]=='x') res++;
        }
        cout<<res<<endl;
    }
    return 0;
}