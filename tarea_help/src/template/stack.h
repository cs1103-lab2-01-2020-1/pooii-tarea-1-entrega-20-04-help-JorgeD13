//
// Created by Usuario on 19/04/2020.
//

#ifndef STACK_H
#define STACK_H

#include "../lib.h"

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    //add copy constructor
    Stack(const Stack& other);
    //add assignment constructor
    explicit Stack(const vector<T>& other);
    //Constructor por defecto:
    Stack();

    void push(T const& elem);
    void pop();
    T const& top() const;
    bool empty();
    //overload == operator
    bool operator==(const Stack& other);

    void print_elements(ostream& os);
    template<typename t> friend ostream& operator<<(ostream& os, Stack<t> const& s);

};


#endif //STACK_H
