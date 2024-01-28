#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node() {
        this->data = 0;
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next) {
        this->data = data;
        this->next = next;
    }
};

Node *sortList(Node *head) {
    if (head == NULL || head->next == NULL)
        return head;
    Node *dummyNode0 = new Node(-1);
    Node *dummyNode1 = new Node(-1);
    Node *dummyNode2 = new Node(-1);
    Node *Node0 = dummyNode0;
    Node *Node1 = dummyNode1;
    Node *Node2 = dummyNode2;
    Node *curr = head;
    while (curr) {
        if (curr->data == 0) {
            Node0->next = curr;
            Node0 = Node0->next;
        } else if (curr->data == 1) {
            Node1->next = curr;
            Node1 = Node1->next;
        } else {
            Node2->next = curr;
            Node2 = Node2->next;
        }
        curr = curr->next;
    }
    head = dummyNode0->next;
    Node0->next = (dummyNode1->next) ? dummyNode1->next : dummyNode2->next;
    Node1->next = dummyNode2->next;
    dummyNode0->next = nullptr;
    dummyNode1->next = nullptr;
    dummyNode2->next = nullptr;
    delete dummyNode0;
    delete dummyNode1;
    delete dummyNode2;
    return head;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}