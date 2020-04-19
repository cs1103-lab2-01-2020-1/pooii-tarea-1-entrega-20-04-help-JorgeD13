#include "lib.h"
#include "template/stack.h"
#include "template/stack.cpp"


int main() {

    Stack<int> intstack;
    Stack<string> stringstack;
    cout<<"Funciona"<<endl;
    intstack.push(100);
    cout<<intstack.top()<<endl;

    stringstack.push("utec");
    cout<<stringstack.top()<<endl;
    stringstack.pop();

    //agregar más ejemplos de todas las funciones de Stack
    cout<< "stringstack: " << stringstack.empty() << endl;  //Probando empty() - True (Línea 16)
    vector<int> v = {1, 2, 3, 4};
    Stack<int> Copy(intstack);                              //Probando constructor de copia
    Stack<int> Assig(v);                                    //Probando constructor de asignación

    Copy.print_elements(cout);                          //Probando print_elements
    Assig.print_elements(cout);
    cout<<Assig<<endl;                                            //Probando operador <<
    if (Copy==intstack)
        cout<<"Operador \"==\" funciona"<<endl;
    return 0;
}
