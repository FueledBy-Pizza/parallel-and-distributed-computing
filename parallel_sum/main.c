#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>

int main(int argc, char *argv[]){
    int nproc, curr_proc;

    MPI_Init(&argc, &argv);

    MPI_Comm_size(MPI_COMM_WORLD, &nproc);
    MPI_Comm_rank(MPI_COMM_WORLD, &curr_proc);

    printf("Hello world! Here it's process %d of %d total processes\n", curr_proc, nproc);

    MPI_Finalize();
    return 0;
}
