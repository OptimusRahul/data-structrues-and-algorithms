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

Node* reverseLL(Node *head) {
    Node *temp = NULL, *tmp = head;
    
    while(tmp != NULL) {
        Node *newNode = new Node(tmp->data);
        newNode->next = temp;
        tmp = tmp->next;
    }

    return temp;
}

bool checkPalindrome(Node *h1, Node *h2) {
    bool flag = false;

    while(h1 != NULL && h2 != NULL) {
        if(h1->data == h2->data) {
            flag = true;
        } else {
            flag = false;
            break;
        }

        h1 = h1->next;
        h2 = h2->next;
    }

    return flag;
}

bool midPoint(Node* head) {
    Node *slow = head;
    Node *fast = head;
    Node *prev = head;

    if(head != NULL) {
        while(fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
    }

    prev->next = NULL;
    slow = reverseLL(slow);
    return checkPalindrome(head, slow);
}

bool isPalindrome(Node *head) {

}

int main() {
    int t;
    cin >> t;

    while(t--) {
        Node *head = takeInput();
        bool ans = isPalindrome(head);

        if(ans) cout << "true" << endl;
        else cout << "false" << endl;
    }

    return 0;
}