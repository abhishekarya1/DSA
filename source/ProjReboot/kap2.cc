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
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

int total(node* head)
{
	int i = 0;
	node* ty = head;
	while(ty)
	{
		i+=1;
		ty = ty->next;
	}
	return i;
}

void kappend(node* &head, int k)
{
	node* prev = NULL;
	node* tmp = head;
	node* slow = head;
	node* fast = head;
	int iter = total(head) - k;
    if(iter == 0 || k >= 0)
    {
        return;
    } 
	while(k)
	{
		fast = fast -> next;
	}


	while(fast)
	{
		prev = slow;
		slow = slow -> next;
		fast = fast -> next;
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = head;
	head = slow;
	prev->next = NULL;
}

int main()
{
	int n, k;
	cin >> n;
	node* head = createLL(n);
	cin >> k;
	kappend(head, k);
	print(head);

}