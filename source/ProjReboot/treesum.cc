#include<iostream>
#include<cstring>

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
	string rch, lch;
	int x;

	cin >> x;
	
	treenode*root = new treenode(x);
	cin >> lch;
	if(lch == "true") root->left = createTree();
	cin >> rch;
	if(rch == "true") root->right = createTree();
	return root;	
		
}

void printtree(const treenode* root)
{
	if (root == NULL) return;
	printtree(root->left);
	cout << root->data << " ";
	printtree(root->right);
}

int treesum(treenode* root)
{
	int fsum;
	if(root == NULL) return 0;
	
	return fsum = root->data + treesum(root->left) + treesum(root->right);
}

int main()
{
	treenode *root = createTree();
	// printtree(root);
	cout << treesum(root);
}