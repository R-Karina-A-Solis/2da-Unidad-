#include <iostream>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cstdio>
using namespace std;
using namespace chrono;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root = nullptr;

    void insert(int val) {
        root = insertRec(root, val);
    }

    bool search(int val) {
        return searchRec(root, val);
    }

    void remove(int val) {
        root = removeRec(root, val);
    }

    void update(int oldVal, int newVal) {
        if (search(oldVal)) {
            remove(oldVal);
            insert(newVal);
        }
    }

private:
    Node* insertRec(Node* node, int val) {
        if (!node) return new Node(val);
        if (val < node->val) node->left = insertRec(node->left, val);
        else node->right = insertRec(node->right, val);
        return node;
    }

    bool searchRec(Node* node, int val) {
        if (!node) return false;
        if (val == node->val) return true;
        if (val < node->val) return searchRec(node->left, val);
        return searchRec(node->right, val);
    }

    Node* removeRec(Node* node, int val) {
        if (!node) return nullptr;
        if (val < node->val) node->left = removeRec(node->left, val);
        else if (val > node->val) node->right = removeRec(node->right, val);
        else {
            if (!node->left) return node->right;
            if (!node->right) return node->left;
            Node* temp = minValueNode(node->right);
            node->val = temp->val;
            node->right = removeRec(node->right, temp->val);
        }
        return node;
    }

    Node* minValueNode(Node* node) {
        Node* current = node;
        while (current && current->left) current = current->left;
        return current;
    }
};

void medirTiempos(int n) {
    vector<int> datos(n);
    for (int i = 0; i < n; ++i) datos[i] = i;

    vector<double> tiempos[4][4];
    vector<string> estructuras = {"Pila", "Cola", "Lista", "arbol"};
    vector<string> operaciones = {"Insercion", "Busqueda", "Eliminacion", "Actualizacion"};

    double total;
    volatile int dummy = 0;

    // ---------------- PILA ----------------
    for (int op = 0; op < 4; ++op) {
        total = 0;
        for (int r = 0; r < 100; ++r) {
            stack<int> pila;
            for (int x : datos) pila.push(x);
            auto t1 = high_resolution_clock::now();
            if (op == 0) {
                stack<int> p;
                for (int x : datos) p.push(x);
                dummy += p.top();
            } else if (op == 1) {
                while (!pila.empty()) {
                    if (pila.top() == n - 1) break;
                    pila.pop();
                }
            } else if (op == 2) {
                while (!pila.empty()) pila.pop();
            } else {
                pila.pop(); pila.push(-1);
            }
            auto t2 = high_resolution_clock::now();
            total += duration<double, nano>(t2 - t1).count();
        }
        tiempos[0][op].push_back(total / 100.0);
    }

    // ---------------- COLA ----------------
    for (int op = 0; op < 4; ++op) {
        total = 0;
        for (int r = 0; r < 100; ++r) {
            queue<int> cola;
            for (int x : datos) cola.push(x);
            auto t1 = high_resolution_clock::now();
            if (op == 0) {
                queue<int> q;
                for (int x : datos) q.push(x);
                dummy += q.front();
            } else if (op == 1) {
                while (!cola.empty()) {
                    if (cola.front() == n - 1) break;
                    cola.pop();
                }
            } else if (op == 2) {
                while (!cola.empty()) cola.pop();
            } else {
                cola.pop(); cola.push(-1);
            }
            auto t2 = high_resolution_clock::now();
            total += duration<double, nano>(t2 - t1).count();
        }
        tiempos[1][op].push_back(total / 100.0);
    }

    // ---------------- LISTA ----------------
    for (int op = 0; op < 4; ++op) {
        total = 0;
        for (int r = 0; r < 100; ++r) {
            list<int> lista;
            for (int x : datos) lista.push_back(x);
            auto t1 = high_resolution_clock::now();
            if (op == 0) {
                list<int> l;
                for (int x : datos) l.push_back(x);
                dummy += l.back();
            } else if (op == 1) {
                find(lista.begin(), lista.end(), n - 1);
            } else if (op == 2) {
                lista.clear();
            } else {
                auto it = find(lista.begin(), lista.end(), n - 1);
                if (it != lista.end()) *it = -1;
            }
            auto t2 = high_resolution_clock::now();
            total += duration<double, nano>(t2 - t1).count();
        }
        tiempos[2][op].push_back(total / 100.0);
    }

    // ---------------- ÁRBOL BINARIO ----------------
    for (int op = 0; op < 4; ++op) {
        total = 0;
        for (int r = 0; r < 100; ++r) {
            BinaryTree tree;
            vector<int> mezcla = datos;
            random_shuffle(mezcla.begin(), mezcla.end());
            for (int x : mezcla) tree.insert(x);
            auto t1 = high_resolution_clock::now();
            if (op == 0) {
                BinaryTree t;
                for (int x : mezcla) t.insert(x);
                dummy += mezcla.back();
            } else if (op == 1) {
                tree.search(n - 1);
            } else if (op == 2) {
                for (int x : mezcla) tree.remove(x);
            } else {
                tree.update(n - 1, -1);
            }
            auto t2 = high_resolution_clock::now();
            total += duration<double, nano>(t2 - t1).count();
        }
        tiempos[3][op].push_back(total / 100.0);
    }

    // Imprimir tabla
    cout << "\n| Estructura   | Insercion | Busqueda | Eliminacion | Actualizacion |\n";
    cout << "|--------------|-----------|----------|-------------|----------------|\n";
    for (int i = 0; i < 4; ++i) {
        cout << "| " << estructuras[i];
        int esp = 13 - estructuras[i].size();
        while (esp--) cout << " ";
        for (int j = 0; j < 4; ++j) {
            printf("| %9.2f ", tiempos[i][j][0]);
        }
        cout << "|\n";
    }

    // Exportar CSV de tiempos
    FILE* out = fopen("tiempos.csv", "w");
    fprintf(out, "estructura,operacion,tiempo\n");
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            fprintf(out, "%s,%s,%.4f\n", estructuras[i].c_str(), operaciones[j].c_str(), tiempos[i][j][0]);
    fclose(out);

    // Exportar CSV de complejidades
    FILE* out2 = fopen("complejidades.csv", "w");
    fprintf(out2, "estructura,operacion,complejidad\n");
    fprintf(out2, "Pila,Insercion,O(1)\nPila,Busqueda,O(n)\nPila,Eliminacion,O(1)\nPila,Actualizacion,O(1)\n");
    fprintf(out2, "Cola,Insercion,O(1)\nCola,Busqueda,O(n)\nCola,Eliminacion,O(1)\nCola,Actualizacion,O(1)\n");
    fprintf(out2, "Lista,Insercion,O(1)\nLista,Busqueda,O(n)\nLista,Eliminacion,O(1)\nLista,Actualizacion,O(n)\n");
    fprintf(out2, "arbol,Insercion,O(log n)\narbol,Busqueda,O(log n)\narbol,Eliminacion,O(log n)\narbol,Actualizacion,O(log n)\n");
    fclose(out2);

    cout << "\nArchivos generados: tiempos.csv y complejidades.csv ✅\n";
}

int main() {
    int n;
    cout << "Ingrese la cantidad de datos (n): ";
    cin >> n;
    medirTiempos(n);
    return 0;
}



