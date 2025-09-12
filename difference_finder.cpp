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
    vector<string> arr{};
    string s;
    cin>>s;
    while(s!="END"){
        arr.push_back(s);
        cin>>s;
    }
    for(int i=0;i<(arr.size()/2);i++){
        if(arr[i]!=arr[i+(arr.size()/2)]) cout<<"Difference found: "<<arr[i]<<" - "<<arr[i+(arr.size()/2)]<<" at test case "<<i<<endl;
    }
    return 0;
}