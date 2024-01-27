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
    Node(int value, Node *ptr = nullptr) {
        data = value;
        next = ptr;
    }
};
Node *convertArrayToLinkedList(vector<int> arr) {
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
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
    if (head == NULL) return head;
    Node *temp = head;
    head = head->next;
    delete temp; // OR free(temp);
    return head;
}
Node *removesTail(Node *head) {
    if (head == NULL || head->next == NULL) return NULL;
    Node *temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next); // OR delete temp->next
    temp->next = NULL;
    return head;
}
Node *removeK(Node *head, int k) {
    if (head == NULL) return head;
    if (k == 1) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node *mover = head;
    Node *prev = head;
    while (mover != NULL) {
        cnt++;
        if (cnt == k) {
            prev->next = prev->next->next;
            delete mover;
            return head;
        }
        prev = mover;
        mover = mover->next;
    }
    return head;
}
Node *removeElementByValue(Node *head, int element) {
    if (head == NULL) return head;
    if (head->data == element) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node *mover = head;
    Node *prev = head;
    while (mover != NULL) {
        if (mover->data == element) {
            prev->next = prev->next->next;
            delete mover;
            return head;
        }
        prev = mover;
        mover = mover->next;
    }
    return head;
}
Node *insertHead(Node *head, int value) {
    Node *temp = new Node(value, head);
    return temp;
    // OR Directly return new Node(value, head);
    // OR Write head = new Node(value,head); ```in main()```
}
Node *insertTail(Node *head, int value) {
    if (head == NULL) return new Node(value);
    Node *mover = head;
    while (mover->next != NULL) {
        mover = mover->next;
    }
    Node *newNode = new Node(value, NULL);
    mover->next = newNode;
    return head;
}
void run_case(int64_t &tttt) {
    // cout << "#Case " << tttt << ": ";

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &e : arr) cin >> e;
    Node *head = convertArrayToLinkedList(arr);
    // print(head);
    // head = removesHead(head);
    // print(head);
    // head = removesTail(head);
    // print(head);
    // head = removeElementByValue(head, 6);
    // print(head);
    // head = insertHead(head, 100);
    // print(head);
    head = insertTail(head, 50);
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