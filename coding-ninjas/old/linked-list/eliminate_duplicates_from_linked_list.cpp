#include<iostream>
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

    Node* head = NULL, *tail = NULL;
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
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* removeDuplicates(Node* head) {
    Node *temp = head, *tmp = NULL;
    if(temp == NULL) return temp;

    while(temp->next != NULL) {
        if(temp->data == temp->next->data) {
            tmp = temp->next->next;
            delete temp->next;
            temp->next = tmp;
        } else {
            temp = temp->next;
        }
    }

    return head;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        Node *head = takeInput();
        head = removeDuplicates(head);
        print(head);
    }

    return 0;
}