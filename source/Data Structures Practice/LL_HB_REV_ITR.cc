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

void createLL(node*&head, int n)
{
	int x;
	node* tail = NULL;
	while (n)
	{
		cin >> x;
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
		n--;
	}
}

void ll_rev(node*&head)
{
	if(head == NULL) return;
	node* cur = head;
	node* next;
	node* prev = NULL;
	while(cur)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
}

void print(node*&head)
{
	node*cur = head;
	while (cur)
	{
		cout << cur->data << " ";
		cur = cur->next;
	}
}

int main()
{
	int n;
	cin >> n;
	node* head = NULL;
	createLL(head, n);
	ll_rev(head);
	print(head);
}