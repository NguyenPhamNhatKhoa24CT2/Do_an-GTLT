class Solution {
public:
    unordered_set<int> s;
    
    bool findTarget(TreeNode* root, int k) {
        if (!root) return false;
        
        // Kiểm tra xem phần bù (k - root->val) đã xuất hiện chưa
        if (s.count(k - root->val)) return true;
        
        // Lưu giá trị hiện tại vào set
        s.insert(root->val);
        
        // Tiếp tục tìm ở hai nhánh con
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};