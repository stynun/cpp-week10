#include "stack.h"
#include <iostream>

// TODO: Stack 클래스 구현 작성
void Stack::operator+=(int i) {
    LinkedList::insert(0, i);
}

void Stack::push(int data) {
    LinkedList::insert(0, data);
}

int Stack::pop() {
    int poped = LinkedList::get(0);
    LinkedList::remove(0);
    return poped;
}

int Stack::peek() {
    return LinkedList::get(0);
}