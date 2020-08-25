// approach is to use set and search for complementary element in tree O(logn) O(n)
// code
      bool find(TreeNode* root, int k, set <int> &s) {
        if (root == nullptr)
            return false;
        if (s.find(k - root->val)!=s.end())
            return true;
        s.insert(root->val);
        return find(root->left, k, s) || find(root->right, k, s);
    }
    bool findTarget(TreeNode* root, int k) {
        set <int> s;
        return find(root, k, s); 
    }
