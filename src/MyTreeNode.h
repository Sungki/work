#include <iostream>

class TreeNode
{
public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}

	static int maxDepth(TreeNode* root)
	{
		if (root == nullptr) return 0;
		else
		{
			int ldepth = maxDepth(root->left);
			int rdepth = maxDepth(root->right);

			if (ldepth > rdepth) return ldepth + 1;
			else return rdepth + 1;
		}
	}
};