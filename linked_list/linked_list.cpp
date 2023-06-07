#include "linked_list.h"
#include "node.h"
#include <iostream>

using namespace std;

Linked_List::Linked_List() {
    length = 0;
    head = nullptr;
}

int Linked_List::get_length() {
    return length;
}

void Linked_List::print() {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    Node* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}


void Linked_List::clear() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    length = 0;
}

void Linked_List::push_front(int val) {
    Node* new_node = new Node;
    new_node->val = val;
    new_node->next = head;
    head = new_node;
    length++;
}

void Linked_List::push_back(int val) {
    Node* new_node = new Node;
    new_node->val = val;
    new_node->next = nullptr;
    
    if (head == nullptr) {
        head = new_node;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
    }
    
    length++;
}

void Linked_List::insert(int val, int index) {
    if (index < 0 || index > length) {
        cout << "Invalid index!" << endl;
        return;
    }
    
    if (index == 0) {
        push_front(val);
    } else if (index == length) {
        push_back(val);
    } else {
        Node* new_node = new Node;
        new_node->val = val;
        
        Node* current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        
        new_node->next = current->next;
        current->next = new_node;
        
        length++;
    }
}

void Linked_List::sort_ascending() {
    head = merge_sort(head);
}

Node* Linked_List::merge_sort(Node* start) {
    if (start == nullptr || start->next == nullptr) {
        return start;
    }
    
    Node* mid = get_middle(start);
    Node* next_of_mid = mid->next;
    mid->next = nullptr;
    
    Node* left = merge_sort(start);
    Node* right = merge_sort(next_of_mid);
    
    return merge(left, right);
}

Node* Linked_List::merge(Node* left, Node* right) {
    if (left == nullptr) {
        return right;
    }
    
    if (right == nullptr) {
        return left;
    }
    
    Node* result;
    if (left->val <= right->val) {
        result = left;
        result->next = merge(left->next, right);
    } else {
        result = right;
        result->next = merge(left, right->next);
    }
    
    return result;
}

Node* Linked_List::get_middle(Node* start) {
    Node* slow = start;
    Node* fast = start;
    
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

void Linked_List::sort_descending() {
    head = merge_sort_descending(head);
}

Node* Linked_List::merge_sort_descending(Node* start) {
    if (start == nullptr || start->next == nullptr) {
        return start;
    }
    
    Node* mid = get_middle(start);
    Node* next_of_mid = mid->next;
    mid->next = nullptr;
    
    Node* left = merge_sort_descending(start);
    Node* right = merge_sort_descending(next_of_mid);
    
    return merge_descending(left, right);
}

Node* Linked_List::merge_descending(Node* left, Node* right) {
    if (left == nullptr) {
        return right;
    }
    
    if (right == nullptr) {
        return left;
    }
    
    Node* result;
    if (left->val >= right->val) {
        result = left;
        result->next = merge_descending(left->next, right);
    } else {
        result = right;
        result->next = merge_descending(left, right->next);
    }
    
    return result;
}
