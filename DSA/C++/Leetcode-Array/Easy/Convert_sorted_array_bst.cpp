#include <iostream>
#include <vector>
#include <queue>
#include <stack>
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x) , left(nullptr) , right(nullptr) {}
};

TreeNode* buildbst(std::vector<int>& nums , int l , int r){

    if(l >r ) return nullptr;

    int mid = (l + r) /2;
    TreeNode* root = new TreeNode(nums[mid]);

    root->left = buildbst(nums , l , mid-1);
    root->right = buildbst(nums , mid+1 ,r);

    return root;

}



///iterative way 
// Helper struct to keep track of parent and array range
struct NodeInfo {
    TreeNode* parent;
    int l, r;
    bool isLeft; // true = attach as left child, false = right child
};

TreeNode* sortedArrayToBSTIterative(std::vector<int>& nums) {
    if (nums.empty()) return nullptr;

    int l = 0, r = nums.size() - 1;
    int mid = (l + r) / 2;

    TreeNode* root = new TreeNode(nums[mid]); // root node
    std::stack<NodeInfo> st;

    // Push left and right subarrays into stack
    st.push({root, mid + 1, r, false}); // right subarray
    st.push({root, l, mid - 1, true});  // left subarray

    while (!st.empty()) {
        NodeInfo cur = st.top(); 
        
       std::cout << "Parent=" << (cur.parent ? cur.parent->val : -1)
         << " Range=[" << cur.l << "," << cur.r << "] "
         << "isLeft=" << cur.isLeft << std::endl;
        st.pop();

        if (cur.l > cur.r) continue; // base case

        int mid = (cur.l + cur.r) / 2;
        TreeNode* node = new TreeNode(nums[mid]);

        // attach to parent
        if (cur.isLeft) cur.parent->left = node;
        else cur.parent->right = node;

        // push right and left subarrays for this node
        st.push({node, mid + 1, cur.r, false});
        st.push({node, cur.l, mid - 1, true});
    }

    return root;
}


void printLevelOrder(TreeNode* root){

    if (!root) return;
    
    std::queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* node  = q.front();
        q.pop();
        if(node){
            std::cout << node->val << " ";

            q.push(node->left);
            q.push(node->right);
        
        }else{
            std::cout << " null ";
        }
        
    }
    

}

int main(){


    std::vector<int> nums = {1,3};

    TreeNode* root = sortedArrayToBSTIterative(nums);
    printLevelOrder(root);
    

    return 0;

}
