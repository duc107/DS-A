#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};
typedef struct Node* LinkedList;

int isEmpty (LinkedList list) {
    return list == NULL;
}

void addNewNode (LinkedList* head, int data) {
    struct Node*p = (struct Node*)malloc(sizeof(struct Node));

    p -> data = data;
    p -> next = NULL;

    if (isEmpty(*head)) {
        *head = p;
    }
    else {
        p -> next = *head;
        *head = p;
    }
}
void print(Node* head) {
    while (head != NULL) {
        cout << head -> data << " -> ";
        head = head -> next;
    }
    cout << "NULL\n";
}

int main() {
    cout << sizeof(Node) << "\n";

    LinkedList singlyLinkedList = NULL;
    int n;
    int data;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> data;

        addNewNode(&singlyLinkedList, data);
    }
    
    print(singlyLinkedList);
    return 0;
}