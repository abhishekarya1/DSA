// Runners Technique
#include<iostream>

using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
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

// node* mid_runner(node*head)
// {
// 	if (head == NULL || head->next == NULL) return head;
// 	node* slowPtr = head;
// 	node* fastPtr = head;

// 	while (fastPtr != NULL && fastPtr->next != NULL)
// 	{
// 		fastPtr = fastPtr->next->next;
// 		slowPtr = slowPtr->next;
// 	}
// 	return slowPtr;
// }

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

bool checkPalin(node*&head)
{
	node* start = head;
	node* end = head;
	int len = length(head);
	int h = len / 2;
	while (h)
	{
		int i = len;
		end = head;
		while (i - 1)
		{
			end = end->next;
			i--;
		}
		if (start->data != end->data) return false;
		start = start->next;
		len--;
		h--;
	}

	return true;
}

void print(node*&head)
{
	node* tmp = head;
	while (tmp)
	{
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

int main()
{
	int n; cin >> n;
	node* head = NULL;
	createLL(head, n);

	checkPalin(head) == true ? cout << "True" : cout << "False";
}