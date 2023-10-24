class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};

        vector<int> ans;
        queue<TreeNode*> queue;
        queue.push(root);

        while(!queue.empty())
        {
            int curr_level_size = queue.size();
            printf("%d\n",curr_level_size);

            int max_val = INT_MIN;

            for(int i = 0; i < curr_level_size; ++i)
            {
                TreeNode* node = queue.front();
                printf("%d\n",curr_level_size);
                queue.pop();
                max_val = max(max_val, node->val);

                if(node->left) queue.push(node->left);
                if(node->right) queue.push(node->right);
            }
            ans.push_back(max_val);
        }
        return ans;
    }
};
