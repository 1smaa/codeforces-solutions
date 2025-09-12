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
        int a,b;
        cin>>a>>b;
        if(a==1){
            if((b/2)%2) cout<<-1<<endl;
            else cout<<(2+(b/2))<<endl;
        } else if(a%2==1&&b%2==1){
            cout<< a*b+1<<endl;
        } else if(a%2==1&&b%2==0){
            if(b==1) cout<<-1<<endl;
            else cout<<(a*(b/2)+2)<<endl;
        } else if(a%2==0&&b%2==1){
            cout<<-1<<endl;
        } else {
            cout<<(a*(b/2)+2)<<endl;
        }
    }
    return 0;
}