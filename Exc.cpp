//Para cada item abaixo, faça um programa paralelo em C++, empregando funçoes MPI, no modelo CGM, que:

// c) Determine a média dos elementos de um conjunto A de tamanho n, onde n mod p=0, e quantos elementos são menores que a média.

#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[])
{
    int rank, size;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    printf("Rank: %d/%d\n", rank, size);

    MPI_Finalize();

    return 0;
}
