#include<iostream>

using namespace std;

class node {
public:
	int data;
	node*next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void print(node*head)
{
	node* tmp = head;
	while (tmp)
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

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
			tail = nn;
			head = nn;
		}
		else {
			tail -> next = nn;
			tail = nn;
		}
		n--;
	}
	return head;
}

node* oddeven(node* head)
{
	node* tl;
	node* end = head;
	node* cur = head;
	node * prev = NULL;
	while(cur->next)
	{
		if(cur->data % 2 == 0) { tl = cur; prev->next = cur->next;}
		while(end->next)
		{
			end = end->next;
		}
		end->next = tl;
		tl->next = NULL;
		prev = cur;
		cur = cur->next;
	}
}

int main()
{
	int n; cin >> n;
	node* head = createLL(n);
	print(head);
	oddeven(head);

}