#include<iostream>

using namespace std;

class node {
public:
	node*next;
	int data;

	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void insertatBeg(node*&head, int data)
{
	node*n = new node(data);
	n->next = head;
	head = n;
}

void insertatEnd(node*&head, int data)
{
	node*n = new node(data);
	node*tmp = head;
	while (tmp -> next != NULL)
	{
		tmp = tmp -> next;
	}

	tmp -> next = n;

}

void printLL(const node*head)
{
	const node*tmp = head;
	while (tmp != NULL)				// or while(tmp) as all addresses are bool convertible [Non-NULL = 1, NULL = 0]
	{
		cout << tmp -> data << "-->";
		tmp = tmp -> next;
	}
}

node* deleteNode(node*head, int x)
{
	node*cur = head;
	node*prev = NULL;
	while (cur -> data != x)
	{
		prev = cur;
		cur = cur -> next;
	}

	prev -> next = cur -> next;
	delete cur;
}

void reverseList(node*head)
{

}

node* deletenode(node* SW)

node* createLL()
{
	int x;
	node *head = NULL;
	node *tail = NULL;
	while (true)
	{
		cin >> x;
		if (x == -1) break;

		node* newNode = new node(x);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = tail -> next;
		}

	}
	return head;

}

int main()
{
	node* head = createLL();
	printLL(head);
	cout << endl;
	deleteNode(head, 4);
	printLL(head);
}