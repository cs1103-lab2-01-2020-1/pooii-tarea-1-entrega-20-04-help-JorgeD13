//
// Created by Usuario on 19/04/2020.
//

#include "stack.h"

template<typename T>
Stack<T>::Stack(const Stack &other) {
    this->elements = other.elements;            //igualo el vector de la clase con el vector de otra clase
}

template<typename T>
Stack<T>::Stack(const vector<T>& other) {
    elements=other;                             //igualo el vector de la clase con un vector pasado como parámetro del mismo tipo "T"
}

template<typename T>
Stack<T>::Stack() {}                            //Constructor para aceptar los "stack<T>" sin parámetros

template<typename T>
void Stack<T>::push(T const& elem) {
    elements.push_back(elem);                   //agregando un elemento al vector de la clase en la posición posterior del último elemento en ese momento
}

template<typename T>
void Stack<T>::pop() {
    elements.pop_back();                        //eliminando el último del vector de la clase
}

template<typename T>
T const &Stack<T>::top() const {
    return *(elements.end()-1);                 //retorna el último elemento, end() == (elemento después del último) -> end()-1 == (último)
}

template<typename T>
bool Stack<T>::empty() {
    return elements.size() == 0;                //retorna el valor booleano de la igualdad
}

template<typename T>
bool Stack<T>::operator==(const Stack<T>& other) {
    if (this->elements.size() != other.elements.size())     //si no tienen el mismo tamaño no se pueden comparar
        return false;
    for (int i=0; i < this->elements.size(); i++){          //si tinen el mismo tamaño verifica que los elementos sean los mismos
        if(this->elements[i] != other.elements[i])          //si un elemento no es igual al del otro en la misma posicion retorna falso
            return false;
    }
    return true;                                //si pasó todas las pruebas, los objetos "Stack" son iguales
}

template<typename T>
void Stack<T>::print_elements(ostream &os) {
    for(auto x:elements)
        os<< x << " ";                         //imprime los elementos del vector de la clase (elements)
    cout<<endl;
}

template<typename t>
ostream &operator<<(ostream &os, const Stack<t> &s) {
    for(auto x:s.elements)
        os<< x << " ";
    return os;
}
