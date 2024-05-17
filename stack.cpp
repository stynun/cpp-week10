#include "stack.h"

// TODO: Stack 클래스 구현 작성
void Stack::operator+=(int i) {
    LinkedList::insert(LinkedList::size_, i);
}

void Stack::push(int data) {
    LinkedList::insert(LinkedList::size_, data);
}

int Stack::pop() {
    int poped = LinkedList::get(LinkedList::size_ - 1);
    LinkedList::remove(LinkedList::size_ - 1);
    return poped;
}

int Stack::peek() {
    return LinkedList::get(LinkedList::size_ - 1);
}