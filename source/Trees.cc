#include<iostream>

using namespace std;

class Treenode {
public:
	int data;
	Treenode* left;
	Treenode* right;
	Treenode(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

Treenode* createTree() {
	int x;
	cin >> x;
	if (x == -1) return NULL;

	Treenode* root = new Treenode(x);
	root->left = createTree();
	root->right = createTree();
	return root;

}

void printTree(Treenode* root)
{
	if (root == NULL) return;
	printTree(root->left);
	cout << root->data;
	printTree(root->right);
}

int main()
{
	Treenode* root = createTree();
	printTree(root);
}