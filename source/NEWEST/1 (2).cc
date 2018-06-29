#include<iostream>

using namespace std;


class treenode {
public:
	int data;
	treenode* left;
	treenode* right;

	treenode(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

treenode* createTree(treenode* root)
{
	int x;
	while (true)
	{
		cin >> x;
		if (x == -1) break;
		treenode* nn = new treenode(x);

		createTree(root->left);
		createTree(root->right);
		return root;
	}
}

bool isSameValueSubtree(treenode* root)
{
	if (root == NULL) return true;
	bool isRoot = (root->left ? root->data == root->left->data : true) && root->right ? root->data == root->right->data : true;
	bool x = isSameValueSubtree(root->left); 
	bool y = isSameValueSubtree(root->right);

	return isRoot && isSameValueSubtree(root->left) && isSameValueSubtree(root->right);
}

int nSameValueSubtree(treenode* root)
{
	if (root == NULL) return 0;
	int x = nSameValueSubtree(root->left);
	int y = nSameValueSubtree(root->right);
	bool isRootSameValueSubtree = isSameValueSubtree(root);
	return x + y + (isRootSameValueSubtree ? 1 : 0);
}

void print(const treenode* root)
{
	if (root == NULL) return;
	print(root->left);
	cout << root->data;
	print(root->right);
}

int main()
{
	treenode* root = createTree(root);
	print(root);
}