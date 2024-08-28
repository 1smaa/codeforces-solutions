#include <iostream>
#include <vector>

int main(void) {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n, 0);
        std::string s;
        std::cin>>s;
        for(int i=0;i<s.length();i++) arr[i]=(s[i]=='1' ? 1 : 0);
        std::vector<int> r{};
        bool was = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0 && was) continue;
            else if (arr[i] == 1) {
                r.push_back(1);
                was = false;
            } else {
                r.push_back(0);
                was = true;
            }
        }
        //std::cout << "Size: " << r.size() << std::endl;
        int cz = 0, co = 0;
        for (int i = 0; i < r.size(); i++) {
            if (r[i]) co++;
            else cz++;
        }
        std::cout << (co > cz ? "YES" : "NO") << std::endl;
    }
    return 0;
}
