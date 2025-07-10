#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int N;
    stack<int> pila;
    queue<int> cola;

    cout << "Ingrese el numero de elementos N: ";
    cin >> N;

    
    for (int i = 1; i <= N; i++) {
        pila.push(i);
    }

    
    cout << "\nPila original (tope al fondo): ";
    stack<int> tempPila = pila;
    while (!tempPila.empty()) {
        cout << tempPila.top() << " ";
        tempPila.pop();
    }


    while (!pila.empty()) {
        int elemento = pila.top();
        pila.pop();
        cola.push(elemento);
        cout << "\nMovido de pila a cola: " << elemento;
    }

    
    while (!cola.empty()) {
        int elemento = cola.front();
        cola.pop();
        pila.push(elemento);
        cout << "\nMovido de cola a pila: " << elemento;
    }

    cout << "\n\nPila final (tope al fondo): ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }

    cout << endl;
    return 0;
}

