#include<iostream>

using namespace std;

class node
{
public:
	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

node* createLL(int n)
{
	int x;
	node* head = NULL;
	node* tail = NULL;
	while (n) {
		cin >> x;
		node* nn = new node(x);
		if (head == NULL)
		{
			head = nn;
			tail = nn;
		}
		else
		{
			tail->next = nn;
			tail = nn;
		}
		n--;
	}
	return head;
}

void print(node* head)
{
	node*tmp  = head;
	while (tmp)
	{
		cout << tmp->data << "-->";
		tmp = tmp->next;
	}
}

void kappend(node* head, int k)
{
	node* prev = NULL;
	node* cur = head;
	node* tmp = head;
	while (k - 1)
	{
		prev = cur;
		cur = cur->next;
		k--;
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = head;
	head = cur;
	prev->next = NULL;
}

int main()
{
	int n, k;
	cin >> n;
	node* head = createLL(n);
	print(head);
	cin >> k;
	kappend(head, k);
	print(head);

}