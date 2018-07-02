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

void oddeven(node* &head)
{
    node *end = head;
    node *prev = NULL;
    node *cur = head;
 
    while (end->next) end = end->next;
 
    node *new_end = end;
 
    /* Consider all odd nodes before the first even node
       and move then after end */
    while (cur->data %2 == 0 && cur != end)
    {
        new_end->next = cur;
        cur = cur->next;
        new_end->next->next = NULL;
        new_end = new_end->next;
    }
 
    // 10->8->17->17->15
    /* Do following steps only if there is any even node */
    if (cur->data%2 != 0)
    {
        /* Change the head pointer to point to first even node */
        head = cur;
 
        /* now current points to the first even node */
        while (cur != end)
        {
            if ( (cur->data)%2 != 0 )
            {
                prev = cur;
                cur = cur->next;
            }
            else
            {
                /* break the link between prev and current */
                prev->next = cur->next;
 
                /* Make next of curr as NULL  */
                cur->next = NULL;
 
                /* Move curr to end */
                new_end->next = cur;
 
                /* make curr as new end of list */
                new_end = cur;
 
                /* Update current pointer to next of the moved node */
                cur = prev->next;
            }
        }
    }
 
    /* We must have prev set before executing lines following this
       statement */
    else prev = cur;
 
    /* If there are more than 1 odd nodes and end of original list is
      odd then move this node to end to maintain same order of odd
      numbers in modified list */
    if (new_end!=end && (end->data)%2 != 0)
    {
        prev->next = end->next;
        end->next = NULL;
        new_end->next = end;
    }
    return;
}

int main()
{
	int n; cin >> n;
	node* head = createLL(n);
	print(head);
	oddeven(head);
	print(head);


}