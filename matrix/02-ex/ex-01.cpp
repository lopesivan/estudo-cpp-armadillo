#include <iostream>
#include <armadillo>

using namespace std;
using namespace arma;

int main()
{
    // Cria duas matrizes 4x5 com valores aleatórios uniformes no intervalo [0, 1)
    mat A (4, 5, fill::randu);
    mat B (4, 5, fill::randu);

    // Exibe as matrizes originais
    cout << "Matrix A:" << endl;
    A.print();

    cout << "\nMatrix B:" << endl;
    B.print();

    // Multiplicação: A * B.t() resulta em uma matriz 4x4
    cout << "\nA * B.t():" << endl;
    mat C = A * B.t();
    C.print();

    return 0;
}
