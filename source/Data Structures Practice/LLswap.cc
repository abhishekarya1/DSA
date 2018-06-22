#include<iostream>

using namespace std;

class node {
public:
	int data;
	node*next;
	node(int d) {
		data = d;
		next = NULL;
	}
};

void createLL(node*&head, int n)
{
	int x;
	node*tail = head;
	while (n) {
		cin >> x;
		node* nn = new node(x);
		if (head == NULL) { head = nn; tail = nn;}
		else {
			tail->next = nn;
			tail = nn;
		}
		n--;
	}
}

void LLswap(node*&head, int n1, int n2)
{
	node *cur = head;
	node* s1 = NULL;
	node*s2 = NULL;
	while (cur)
	{
		if (cur->data == n1) s1 = cur;
		if (cur->data == n2) s2 = cur;
		cur = cur->next;
	}
	swap(s1->data,s2->data);
}

void print(node*&head)
{
	node* cur = head;
	while (cur)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
}

int main()
{
	int n, n1, n2;
	node*head = NULL;
	cin >> n;
	createLL(head, n);
	cin >> n1 >> n2;
	LLswap(head, n1, n2);
	print(head);
}