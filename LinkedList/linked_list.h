#include <iostream>
#include "linked_list_node.h"

class LinkedList
{
    private:
        Node* mHead;
        Node* mTail;
        int mLength;
    public:
        LinkedList(int value);
        ~LinkedList();
        void printList();
        void printHead();
        void printTail();
        void printLength();
        Node* getHead();
        Node* getTail();
        int getLength();
        void makeEmpty();

        //Here it is O(1) but in STL we have std::forward_list where we don't have mTail so it is O(n)
        void append(int value);
        //O(n) because we need to find second last element to make it last
        void deleteLast();
        //O(1)
        void prepend(int value);
        //O(1)
        void deleteFirst();

        //O(n)
        Node* get(int index);
        //O(n)
        bool set(int index, int value);

        //O(n)
        bool insert(int index, int value);
        //O(n)
        void deleteNode(int index);

        void reverse(); // implement with O(n)
        void reverse_on2(); // implemented without thinking simple solution O(n^2)

        Node* findMiddleNode_on2(); // without using mLength my implementation O(n^2)

        //using Floyd's cycle algo
        Node* findMiddleNode(); // O(n) from the solution
        bool hasLoop();
};