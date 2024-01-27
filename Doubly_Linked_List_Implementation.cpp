#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    Node *back;
    Node(int value, Node *nxt = nullptr, Node *bck = nullptr) {
        data = value;
        next = nxt;
        back = bck;
    }
};
Node *convertArrayToDLL(vector<int> &arr) {
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node *head) {
    Node *mover = head;
    while (mover) {
        cout << mover->data << ' ';
        mover = mover->next;
    }
    cout << "\n";
}
Node *removesHead(Node *head) {
    if (head == NULL || head->next == NULL) return NULL;
    Node *prev = head;
    head = head->next;
    prev->next = nullptr;
    head->back = nullptr;
    delete prev;
    return head;
}
Node *removesTail(Node *head) {
    if (head == NULL || head->next == NULL) return NULL;
    Node *tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    Node *prev = tail->back;
    prev->next = NULL;
    tail->back = NULL;
    delete tail;
    return head;
}
Node *removeKthElement(Node *head, int k) {
    if (head == NULL) return NULL;
    int cnt = 0;
    Node *temp = head;
    while (temp) {
        cnt++;
        if (k == cnt) break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;
    if (prev == NULL && front == NULL) {
        return NULL;
    }
    if (prev == NULL) {
        head = head->next;
        temp->next = nullptr;
        head->back = nullptr;
        delete temp;
        return head;
    }
    if (front == NULL) {
        prev->next = NULL;
        temp->back = NULL;
        delete temp;
        return head;
    }
    prev->next = front;
    temp->back = prev;
    temp->next = nullptr;
    front->back = nullptr;
    delete temp;
    return head;
}
void deleteNode(Node *node) {
    Node *prev = node->back;
    Node *front = node->next;
    if (front == NULL) {
        prev->next = nullptr;
        node->back = nullptr;
        delete node;
    }
    node->next = nullptr;
    node->back = nullptr;
    prev->next = front;
    front->back = prev;
    delete node;
}
Node *insertHead(Node *head, int value) {
    if (head == NULL) return new Node(value);
    Node *newHead = new Node(value, head, nullptr);
    head->back = newHead;
    return newHead;
}
Node *insertTail(Node *head, int value) {
    if (head == NULL) return new Node(value);
    Node *tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    Node *prev = tail->back;
    Node *newNode = new Node(value, tail, prev);
    if (head->next == NULL) {
        head->back = newNode;
        return newNode;
    }
    prev->next = newNode;
    tail->back = newNode;
    return head;
}
Node *insertBeforePosition(Node *head, int element, int position) {
    if (head == NULL) return new Node(element);
    if (position == 1) {
        Node *newNode = new Node(element, head, nullptr);
        head->back = newNode;
        return newNode;
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL) {
        cnt++;
        if (cnt == position) break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(element, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}
void insertBeforeNode(Node *node, int element) {
    Node *prev = node->back;
    Node *newNode = new Node(element, node, prev);
    node->back = newNode;
    prev->next = newNode;
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &e : arr) cin >> e;
    Node *head = convertArrayToDLL(arr);
    // head = removesHead(head);
    // head = removesTail(head);
    // head = removeKthElement(head, 3);
    // deleteNode(head->next);
    // head = insertHead(head, 10);
    // head = insertTail(head, 10);
    // head = insertBeforePosition(head, 10, 8);
    print(head);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t tests = 1;
    // cin >> tests;

    for (int64_t i = 1; i <= tests; i++)
        run_case(i);
}