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
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

Node* appendLastNToFirst(Node *head, int n) {
    Node *temp = head, *tmp = head;
    if(temp->next == NULL) return head;
    int count = -n;

    while(temp->next != NULL) {
        if(count >= 0) {
            tmp = tmp->next;
        }
        temp = temp->next;
        count++;
    }

    temp->next = head;
    head = tmp->next;
    tmp->next = NULL;

    return head;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        Node *head = takeInput();

        int n;
        cin >> n;

        head = appendLastNToFirst(head, n);     
        print(head);   
    }

    return 0;
}