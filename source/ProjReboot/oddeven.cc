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

node* oddeven(node* &head)
{
    // Corner case
    if (head == NULL)
        return NULL;
 
    // Initialize first nodes of even and
    // odd lists
    node *odd = head;
    node *even = head->next;
 
    // Remember the first node of even list so
    // that we can connect the even list at the
    // end of odd list.
    node *evenFirst = even;
 
    while (1)
    {
        // If there are no more nodes, then connect
        // first node of even list to the last node
        // of odd list
        if (!odd || !even || !(even->next))
        {
            odd->next = evenFirst;
            break;
        }
 
        // Connecting odd nodes
        odd->next = even->next;
        odd = even->next;
 
        // If there are NO more even nodes after
        // current odd.
        if (odd->next == NULL)
        {
            even->next = NULL;
            odd->next = evenFirst;
            break;
        }
 
        // Connecting even nodes
        even->next = odd->next;
        even = odd->next;
    }
 
    return head;

}

int main()
{
	int n; cin >> n;
	node* head = createLL(n);
	print(head);
	oddeven(head);
	print(head);


}