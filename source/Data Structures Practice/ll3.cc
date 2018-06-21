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
	node* cur = head;
	node* prev = NULL;
	node* next;
	while (cur)
	{
		next = cur->next;
		cur->next = prev;
		cur = next;
		prev = cur;
	}
	head = prev;
}

void print(node*head) {
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
	ll_reverse(head);
	print(head);
}