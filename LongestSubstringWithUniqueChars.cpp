#include <iostream>
#include <vector>
using namespace std;
int lengthOfLongestSubstring(string s) {

        int maxcount = 0;
        int count = 0;
        vector<int> alpha(128, 0);
        int l = s.length();
        if(l == 0) return 0;
        else if(l == 1) return 1;
        int begin = 0, end = 0;
        while(end < l) {
            int r = (int)s[end];
            alpha[r]++;
            while(alpha[r] > 1) {
                int l = (int)s[begin];
                alpha[l]--;
                begin++;
            }
            maxcount = max(end - begin + 1, maxcount);
            end++;
        }
        
        return maxcount;
    }
int main() {
    // run whatever function you wanna, and just beat it
    return 0;
}