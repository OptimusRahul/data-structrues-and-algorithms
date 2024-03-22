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

Node* mergeLL(Node *list1, Node *list2) {
    Node *res = NULL;
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;

    if(list1->data > list2->data) {
        res = list2;
        res->next = mergeLL(list1, list2->next);
    } else {
        res = list1;
        res->next = mergeLL(list1->next, list2);
    }

    return res;
}

int getLength(Node *head) {
    Node *temp = head;
    
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

Node* mergeSort(Node *head) {
    Node *temp = head;
    int mid = getLength(head)/2;

    if(temp->next == NULL) return head;
    while(mid - 1 > 0) {
        temp = temp->next;
        mid--;
    }

    Node *newHead = temp->next;
    temp->next = NULL;
    temp = head;

    Node *t1 = mergeSort(temp);
    Node *t2 = mergeSort(newHead);

    return mergeLL(t1, t2);
}

int main(){
    int t;
    cin >> t;

    while(t--) {
        Node *head = takeInput();
        head = mergeSort(head);
        print(head);
    }
    return 0;
}