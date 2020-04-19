//
// Author: marvin on 4/19/20.
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
    //add assignment constructor
    void push(T const& elem);
    void pop();
    T const& top() const;
    bool empty();
    //overload == operator
    void print_elements(ostream& os);
    friend ostream& operator<<(ostream& os, Stack<T> const& s);

};


#endif //STACK_H
