#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

class Linked_List {
private:
    int length;  // the number of nodes contained in the list
    Node* head;  // a pointer to the first node in the list
    
    // Private member functions for sorting
    Node* merge_sort(Node* start);
    Node* merge(Node* left, Node* right);
    Node* get_middle(Node* start);
    Node* merge_sort_descending(Node* start);
    Node* merge_descending(Node* left, Node* right);

public:
    Linked_List();
    
    int get_length();
    void print();
    void clear();
    
    void push_front(int val);
    void push_back(int val);
    void insert(int val, int index);
    
    void sort_ascending();
    void sort_descending();
};

#endif
