//Para cada item abaixo, faça um programa paralelo em C++, empregando funçoes MPI, no modelo CGM, que:

// a) Determine o Fatorial de um número n, onde n mod p=0. A entrada e a saída devem ser efetuadas pelo terminal.

#include <iostream>
#include <stdio.h>
#include <mpi.h>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int n, i, f;
    cout << "Insira um Numero para Calcular o seu Fatorial" << endl;
    cin >> n;

    f = 1;

    for (i = 1; i <= n; i++)
    {
        f *= i;
        cout << n << "!=" << i << endl;
    }

    cout << "O Fatorial de:" << n << " = " << f << endl;

    int rank, size;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    printf("Rank: %d/%d\n", rank, size);

    MPI_Finalize();

    return 0;
}
