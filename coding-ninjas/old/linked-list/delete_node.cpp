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

Node* takeInput() {
    int data;
    cin >> data;

    Node *head = NULL, *tail = NULL;
    while(data != -1) {
        Node *newNode = new Node(data);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
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


Node* deleteNode(Node *head, int pos) {
    if(head == NULL)
        return head;
    
    Node* temp = head;
    if(pos == 0) {
        head = temp->next;
        delete temp;
        return head;
    }

    for(int i=0; temp != NULL && i<pos-1; i++) {
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL) {
        return head;
    }

    Node *next = temp->next->next;
    delete temp->next;
    temp->next = next;

    return head;
}

int main() {
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeInput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}