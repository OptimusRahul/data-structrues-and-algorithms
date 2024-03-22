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
        Node* newNode = new Node(data);

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

void printIthNode(Node *head, int pos) {
    Node *temp = head;
    int count = 0;
    bool flag = false;

    while(temp != NULL) {
        if(count == pos) {
            flag = true;
            break;
        }
        count++;
        temp = temp->next;
    }

    if(flag) cout << temp->data << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        Node *head = takeInput();
        int pos;
        cin >> pos;

        printIthNode(head, pos);
        cout << endl;
    }

    return 0;
}