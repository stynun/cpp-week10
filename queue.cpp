#include "queue.h"

// TODO: Queue 클래스 구현 작성
void Queue::operator+=(int i) {
    LinkedList::insert(LinkedList::size_, i);
}

void Queue::push(int data) {
    LinkedList::insert(LinkedList::size_, data);
}

int Queue::pop() {
    int poped = LinkedList::get(0);
    LinkedList::remove(0);
    return poped;
}

int Queue::peek() {
    return LinkedList::get(0);
}