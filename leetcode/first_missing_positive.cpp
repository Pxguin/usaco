using namespace std;

#define ll long long

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for (int i=0;i<n;i++) {
            int x = nums[i]; int nxt;
            while (x > 0 && x <= n && nums[x-1] != x) {
                nxt = nums[x-1];
                nums[x-1] = x;
                x = nxt;
            }
        }
        for (int i=0;i<n;i++) {
            if (nums[i] != i+1) {return i+1;}
        }
        return n+1;
    }
};

// the solution is in the range [1, n+1]
// easy solution is create another array and just mark which numbers are visited
// hard solution to save memory (but more runtime) is to do this process in the current array