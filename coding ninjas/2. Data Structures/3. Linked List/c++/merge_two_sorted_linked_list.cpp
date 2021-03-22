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
            head = newNode;
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

Node* mergeTwoSortedLinkedLists(Node *list1, Node *list2) {
    Node *head = NULL, *tail = NULL;

    while(list1 != NULL && list2 != NULL) {
        Node *newNode = NULL;
        if(list1->data < list2->data) {
            newNode = new Node(list1->data);
            list1 = list1->next;
        } else {
            newNode = new Node(list2->data);
            list2 = list2->next;
        }

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else  {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    while(list1 != NULL) {
        Node *newNode = new Node(list1->data);
        tail->next = newNode;
        tail = tail->next;
        list1 = list1->next;
    }

    while(list2 != NULL) {
        Node *newNode = new Node(list2->data);
        tail->next = newNode;
        tail = tail->next;
        list2 = list2->next;
    }

    return head;     
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        Node *head1 = takeInput();
        Node *head2 = takeInput();
        Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
        print(head3);
    }

    return 0;
}