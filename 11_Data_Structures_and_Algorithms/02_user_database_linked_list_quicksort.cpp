#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// User structure
struct User {
    string name;
    int id;
    string email;
};

// Node for the linked list
struct Node {
    User data;
    Node* next;
    Node(User user) : data(user), next(nullptr) {}
};

// Database: array of linked lists (one for each letter A-Z)
Node* database[26] = {nullptr};

// Get index based on the first character of the name
int getIndex(char c) {
    return tolower(c) - 'a';
}

// Insert a user into the corresponding linked list
void insertUser(User user) {
    int index = getIndex(user.name[0]);
    Node* newNode = new Node(user);
    newNode->next = database[index];
    database[index] = newNode;
}

// Print all users in the database
void printDatabase() {
    cout << "======== User List by Alphabet ========\n";
    for (int i = 0; i < 26; ++i) {
        Node* curr = database[i];
        if (!curr) continue;

        cout << (char)('A' + i) << ":\n";
        while (curr) {
            cout << "  - Name: " << curr->data.name
                 << ", ID: " << curr->data.id
                 << ", Email: " << curr->data.email << endl;
            curr = curr->next;
        }
    }
    cout << "=======================================\n";
}

// Get the last node of a linked list
Node* getTail(Node* cur) {
    while (cur && cur->next)
        cur = cur->next;
    return cur;
}

// Partition the linked list for QuickSort
Node* partition(Node* head, Node* end, Node** newHead, Node** newEnd) {
    Node* pivot = end;
    Node* prev = nullptr, *cur = head, *tail = pivot;

    while (cur != pivot) {
        if (cur->data.name < pivot->data.name) {
            if (!(*newHead)) *newHead = cur;
            prev = cur;
            cur = cur->next;
        } else {
            if (prev) prev->next = cur->next;
            Node* tmp = cur->next;
            cur->next = nullptr;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }

    if (!(*newHead)) *newHead = pivot;
    *newEnd = tail;
    return pivot;
}

// Recursive QuickSort function for linked list
Node* quickSortRecur(Node* head, Node* end) {
    if (!head || head == end)
        return head;

    Node* newHead = nullptr, *newEnd = nullptr;
    Node* pivot = partition(head, end, &newHead, &newEnd);

    if (newHead != pivot) {
        Node* tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = nullptr;

        newHead = quickSortRecur(newHead, tmp);
        tmp = getTail(newHead);
        tmp->next = pivot;
    }

    pivot->next = quickSortRecur(pivot->next, newEnd);
    return newHead;
}

// QuickSort for a single linked list
void quickSortList(Node*& head) {
    head = quickSortRecur(head, getTail(head));
}

// Sort all linked lists in the database
void sortAllLists() {
    for (int i = 0; i < 26; ++i) {
        quickSortList(database[i]);
    }
}

// Test the system
int main() {
    insertUser({"Ahmed", 1001, "ahmed@example.com"});
    insertUser({"Ali", 1002, "ali@example.com"});
    insertUser({"Amr", 1003, "amr@example.com"});
    insertUser({"Bassem", 1004, "bassem@example.com"});
    insertUser({"Badr", 1005, "badr@example.com"});
    insertUser({"Ziad", 1006, "ziad@example.com"});
    insertUser({"Youssef", 1007, "youssef@example.com"});
    insertUser({"Aya", 1008, "aya@example.com"});
    insertUser({"Hassan", 1009, "hassan@example.com"});
    insertUser({"Hany", 1010, "hany@example.com"});

    cout << "\nBefore sorting:\n";
    printDatabase();

    sortAllLists();

    cout << "\nAfter sorting:\n";
    printDatabase();

    return 0;
}