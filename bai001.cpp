// MSSV/HoTen - Bai 001

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // Tạo một tập hợp không thứ tự để lưu các số đã duyệt qua
        unordered_set<int> seen;

        for (int x : nums) {

            // Nếu tìm thấy x trong tập hợp 'seen'
            if (seen.count(x)) {
                return true;
            }

            // Nếu chưa thấy thì thêm vào
            seen.insert(x);
        }

        // Nếu duyệt hết mà không có phần tử trùng
        return false;
    }
};

int main() {

    Solution s;

    vector<int> nums = {1, 2, 3, 1};

    if (s.containsDuplicate(nums))
        cout << "true";
    else
        cout << "false";

    return 0;
}