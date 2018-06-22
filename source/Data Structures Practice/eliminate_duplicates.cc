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

void eliminate(node*&head)
{
	int buffer = 0;
	node* cur = head->next;
	node* prev = head;

	while (cur)
	{
		// if (buffer == cur->data) {prev->next = cur->next; buffer = cur->data; prev = prev->next; cur = prev->next->next;}
		// else {
		// 	buffer = cur->data;
		// 	prev = cur;
		// 	cur = cur->next;
		// }

		if (prev->data == cur->data)
		{
			prev->next = cur->next;
			cur = cur->next; 
		}
		else
		{
		prev = cur;
		cur = cur->next;
		}
	}
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
	int n;
	node*head = NULL;
	cin >> n;
	createLL(head, n);
	eliminate(head);
	print(head);
}