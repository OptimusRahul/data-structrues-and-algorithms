#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};

Node *takeinput() {
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head) {
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

Node* reverseLinkedListItr(Node *head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node *prev = NULL;
    Node *current = head;
    Node *next = head->next;

    while(current != NULL) {
        current->next = prev;
        prev = current;
        current = next;
        if(next != NULL) next = current->next;
    }

    return prev;
}

int main() {
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListItr(head);
		print(head);
	}

	return 0;
}