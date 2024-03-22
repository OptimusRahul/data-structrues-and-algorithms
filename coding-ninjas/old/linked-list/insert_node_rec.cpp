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
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
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

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

Node* insertNode(Node *head, int pos, int data) {
    if(head == NULL) {
        return head;
    }

    Node *temp = head;
    if(temp == NULL && pos == 0 ) {
        Node *newNode = new Node(data);
        newNode->next = temp;
        temp = newNode;
        return newNode;
    } else if(pos == 0) {
        Node *newNode = new Node(data);
        temp->next = newNode;
        temp = newNode;
        return newNode;
    }

    Node *t = insertNode(head->next, pos-1, data);
    head->next = t;
    return head;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}