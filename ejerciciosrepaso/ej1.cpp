// C++ program to illustrate how to find the middle element
// by counting the number of nodes
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
  
    Node(int x) {
        this->data = x;
        this->next = nullptr;
    }
};

// Helper function to find length of linked list
int getLength(Node* head) {


}

// Function to find the middle element of the linked list
int getMiddle(Node* head) {


}

int main() {

    // Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40 -> 50 -> 60 
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    head->next->next->next->next->next = new Node(60);

    cout << getMiddle(head);

    return 0;
}