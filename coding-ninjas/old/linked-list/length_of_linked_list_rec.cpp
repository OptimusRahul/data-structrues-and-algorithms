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
    }

    return head;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int length(Node* head) {
    Node *temp = head;
    if(temp == NULL) {
        return 0;
    }
    return 1 + length(temp->next);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        Node *head = takeInput();
        cout << length(head) << "\n";
    }
}