#include<iostream>

using namespace std;

int cnt;

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
	//cout << "Enter left child of" << x << " ";
	root->left = createTree();
	//cout << "Enter right child of" << x << " ";
	root->right = createTree();
	return root;

}

void printInorder(const Treenode* root)
{
	if (root == NULL) return;
	printInorder(root->left);
	cout << root->data << " ";
	printInorder(root->right);
}

int max(int a, int b)
{
	if(a > b) return a;
	else return b;
}

int getHeight(const Treenode* root)
{
	if (root == NULL) return 0;
	cnt++;
	return max(getHeight(root->left) ,getHeight(root->right));

}

int main()
{
	Treenode* root = createTree();
	printInorder(root);
	cout << endl;
	cout << "Height = " << getHeight(root);
}