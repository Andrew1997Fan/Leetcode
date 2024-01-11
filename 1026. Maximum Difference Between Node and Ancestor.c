int dfs(struct TreeNode* node, int curr_max, int curr_min) {
    /* If reach to the end of the path, return the maximum difference in current path */
    if (node == NULL) {
        return curr_max - curr_min;
    }

    /* Update the max and min values in the path */
    curr_max = fmax(curr_max, node->val);
    curr_min = fmin(curr_min, node->val);

    /* Find the maximum difference start from both child nodes */
    int left_max_diff = dfs(node->left, curr_max, curr_min);
    int right_max_diff = dfs(node->right, curr_max, curr_min);

    /* Return the maximum difference */
    return fmax(left_max_diff, right_max_diff);
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxAncestorDiff(struct TreeNode* root) {
    if (root == NULL)
            return 0;

    return dfs(root, root->val, root->val);
}
