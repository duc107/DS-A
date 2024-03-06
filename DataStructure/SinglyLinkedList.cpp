#include <bits/stdc++.h>

struct Node {
    int data;
    struct Node* next;
    
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

void showLinkedListElement(const LinkedList head) {
    const struct Node* p = head;

    while (p != NULL)  {
        std::cout << p -> data << " -> ";
        p = p -> next;
    }

    std::cout << "NULL\n";
    
}

int main() {
    LinkedList singlyLinkedList = NULL;
    int n;
    int data;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> data;

        addNewNode(&singlyLinkedList, data);
    }
    
    showLinkedListElement(singlyLinkedList);
    
    return 0;
}
