#include<iostream>

using namespace std;

class treenode {
public:
	int data;
	treenode* left;
	treenode* right;
	treenode(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};

treenode* createTree()
{
	bool ch;
	int x; cin >> x;
	cin >> ch;
	if(ch == false) return NULL; 
	
	treenode* root = new treenode(x);
	root->left = createTree();
	root->right = createTree();
	return root;
	
}

void printtree(treenode* root)
{
	printtree(root->left);
	cout << root;
	printtree(root->right);
}

int main()
{
	treenode *root = createTree();
	printtree(root);
}