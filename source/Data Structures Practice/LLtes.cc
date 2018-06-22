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
		nn -> next = NULL;
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

int length(node*&head)
{
	int len = 0;
	node*cur = head;
	while (cur)
	{
		len += 1;
		cur = cur->next;
	}
	return len;
}

// void myswap(node *a, node *b)
// {
// 	int tmp;
// 	tmp = a->data;
// 	a->data=b->data;
// 	b->data=tmp;
// }

void ll_rev(node*&head)
{
	int i;
	node*end = head;
	node*start = head;
	int len = length(head);
	int h = len / 2;
	while(h)
	{
		i=len;
		while(i-1)
		{
			end = end->next;
			i--;
		}
		swap(start->data, end->data);
		start = start->next;
		len--;
		h--;
	}
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