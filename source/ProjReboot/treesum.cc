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
	string ch;
	int x;
	cin >> x >> ch;
	
		treenode* root = new treenode(x);
		if(ch == "false") return NULL;
		else{
			
			root->left = createTree();
		}

		cin >> ch;
		if(ch == "false") return NULL;
		else {
			
			root->right = createTree();
		}
		return root;	
		
}

void printtree(const treenode* root)
{
	if (root == NULL) return;
	printtree(root->left);
	cout << root->data << " ";
	printtree(root->right);
}

int main()
{
	treenode *root = createTree();
	printtree(root);
}