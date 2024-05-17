#include "linked_list.h"
#include <iostream>

// TODO: LinkedList 클래스 구현 작성
LinkedList::LinkedList() : head_(nullptr), size_(0){};

LinkedList::~LinkedList() {
    Node *current = head_;
    while (current->next_ != nullptr) {
        Node *next = current->next_;
        delete current;
        current = next;
    }
    
    size_ = 0;
    head_ = nullptr;
}

void LinkedList::print() {
    Node *current = head_;
    while (current->next_ != nullptr) {
        std::cout << current->value_ << " ";
        current = current->next_;
    }
    std::cout << std::endl;
}

void LinkedList::insert(int index, int value) {
    Node *newNode = new Node(value);
    Node *previous = head_;

    if (index == 0) {
        newNode->next_ = head_;
        head_ = newNode;
    }
    else {
        for (int i = 0; i < index - 1; i++) {
            previous = previous->next_;
        }
        newNode->next_ = previous->next_;
        previous->next_ = newNode;
    }
    
}

int LinkedList::get(int index) {
    Node *current = head_;

    for (int i = 0; i < index; i++) {
        current = current->next_;
    }

    return current->value_;
}

void LinkedList::remove(int index) {
    Node *current = head_;
    Node *next = head_;
    Node *previous = head_;
    
    if (index == 0) {
        next = head_->next_;
        delete current;
        head_ = next;
    }
    else {
        for (int i = 0; i < index - 1; i++) {
            previous = previous->next_;
        }
        current = previous->next_;
        next = current->next_;

        previous->next_ = next;
        delete current;
    }
    
}
