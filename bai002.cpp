// MSSV/HoTen - Bai 002

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();

        vector<int> ans;

        // Dự phòng bộ nhớ
        ans.reserve(2 * n);

        // Duyệt 2 lần
        for (int i = 0; i < 2; i++) {

            for (int x : nums) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};

int main() {

    Solution s;

    vector<int> nums = {1, 2, 1};

    vector<int> result = s.getConcatenation(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}