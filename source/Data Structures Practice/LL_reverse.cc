#include<iostream>

using namespace std;

class node {
public:
	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void createLL(node*&head) {

	int x;
	node* tail = NULL;
	while (true)
	{
		cin >> x;
		if (x == -1) break;
		node* nn = new node(x);
		if (head == NULL)
		{
			head = nn;
			tail = nn;
		}
		else {
			tail->next = nn;
			tail = nn;
		}
	}
}

void ll_reverse(node*&head)
{
	node* c = head;
	node* p = NULL;
	node* n;
	while (c)
	{
		n = c->next;
		c->next = p;
		p = c;
		c = n;
	}
	head = p;
}

void print(node*&head) {
	node*cur = head;
	while (cur)
	{
		cout << cur->data << "-->";
		cur = cur->next;
	}
}

int main()
{
	node*head = NULL;
	createLL(head);
	print(head);
	cout << endl;
	ll_reverse(head);
	print(head);
}