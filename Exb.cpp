//Para cada item abaixo, faça um programa paralelo em C++, empregando funçoes MPI, no modelo CGM, que:
// b) Encontre o maior e o menor valor de um conjunto S de n elementos, onde n mod p=0. A entrada deverá ser fornecida por meio de um arquivo e a saída deverá ser emitida no terminal.

#include <iostream>
#include <stdio.h>
#include <mpi.h>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int TAM = 0;
    int vetS[TAM], i;
    int nMaior, nMenor, n;
    int rank, size;

    cout << "Informe o Tamanho do Conjunto S:" << endl;
    cin >> TAM;

    //Preencher o Conjunto S;
    for (i = 0; i <= TAM; i++)
    {
        cout << "Informe os valores do Conjunto S:" << endl;
        cin >> vetS[i];
        cout << endl;
    }

    //Achar o Numero Maior e Menor.
    nMaior = vetS[0];
    nMenor = vetS[0];
    for (i = 1; i <= TAM; i++)
    {
        if (vetS[i] > nMaior)
        {
            nMaior = vetS[i];
        }
        else if (vetS[i] < nMenor)
        {
            nMenor = vetS[i];
        }
    }
    cout << "Numero Maior:" << nMaior << endl;
    cout << "Numero Menor:" << nMenor << endl;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    printf("Rank: %d/%d\n", rank, size);

    MPI_Finalize();

    return 0;
}
