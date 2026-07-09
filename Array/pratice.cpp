// #include <iostream>
// using namespace std;

// // Definition of TreeNode
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;

//     TreeNode(int x) {
//         val = x;
//         left = NULL;
//         right = NULL;
//     }
// };

// class Solution {
// public:
//     TreeNode* first = NULL;
//     TreeNode* second = NULL;
//     TreeNode* prev = NULL;

//     void inorder(TreeNode* root) {
//         if (root == NULL)
//             return;

//         inorder(root->left);

//         if (prev != NULL && prev->val > root->val) {
//             if (first == NULL)
//                 first = prev;
//             second = root;
//         }

//         prev = root;

//         inorder(root->right);
//     }

//     void recoverTree(TreeNode* root) {
//         inorder(root);

//         if (first != NULL && second != NULL)
//             swap(first->val, second->val);
//     }

//     void printInorder(TreeNode* root) {
//         if (root == NULL)
//             return;

//         printInorder(root->left);
//         cout << root->val << " ";
//         printInorder(root->right);
//     }
// };

// int main() {

//     // Example:
//     //      3
//     //     / \
//     //    1   4
//     //       /
//     //      2
//     //
//     // Swapped nodes: 2 and 3

//     TreeNode* root = new TreeNode(3);
//     root->left = new TreeNode(1);
//     root->right = new TreeNode(4);
//     root->right->left = new TreeNode(2);

//     Solution obj;

//     cout << "Before Recovery (Inorder): ";
//     obj.printInorder(root);
//     cout << endl;

//     obj.recoverTree(root);

//     cout << "After Recovery (Inorder): ";
//     obj.printInorder(root);
//     cout << endl;

//     return 0;
// }










#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int maxCharGap(string &s) {

        vector<int> first(26, -1);
        int ans = -1;

        for (int i = 0; i < s.length(); i++) {

            int index = s[i] - 'a';

            if (first[index] == -1) {
                first[index] = i;
            }
            else {
                ans = max(ans, i - first[index] - 1);
            }
        }

        return ans;
    }
};

int main() {

    string s;
    cin >> s;

    Solution obj;

    cout << obj.maxCharGap(s) << endl;

    return 0;
}