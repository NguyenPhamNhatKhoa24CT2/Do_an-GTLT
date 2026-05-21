class Solution {
public:
    int guessNumber(int n) {
        int left = 1;
        int right = n;
        
        while (left <= right) {
            // Sử dụng công thức này để tránh tràn số nguyên (integer overflow)
            int mid = left + (right - left) / 2;
            
            int res = guess(mid);
            
            if (res == 0) {
                return mid; // Tìm thấy số chính xác
            } 
            else if (res == -1) {
                // Guess cao hơn Pick (mid > pick), thu hẹp phạm vi bên trái
                right = mid - 1;
            } 
            else {
                // Guess thấp hơn Pick (mid < pick), thu hẹp phạm vi bên phải
                left = mid + 1;
            }
        }
        
        return -1;
    }
};

