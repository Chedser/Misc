#ifndef LIST_H
#define LIST_H

template<typename T> class List {
public:
    List();
    ~List();
    void pop_front();
    void push_back(T data);
    int getSize();
    void clear();
    T& operator[](const int index);
    void push_front(T data);
    void pop_back();
    void insert(T data, int index);
    void removeAt(int index);
    void print();
private:
    template<typename T> class Node {
    public:
        Node* pNext;
        T data;
        Node(T data = T(), Node* pNext = nullptr) {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int size;
    Node<T>* head;
};

#endif
