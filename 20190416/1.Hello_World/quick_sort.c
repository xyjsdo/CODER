#include <stdlib.h>
#include <mpi.h>
#define TRUE 1

int GetDataSize();
para_QucikSort(int *data, int start, int end, int m. int id, int MyID);
QuickSort(int *data, int start, int end);
int Partition(int *data, int start, int end);
int exp2(int num);
int log2(int num);
ErrMsg(char *msg);
main(int argc, char *argv[])
{
	int DataSize;
	int *data;
	int MyID, SumID;
	int i, j;
	int m, r;
	MPI_Status status;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &MyID);
	MPI_Comm_size(MPI_COMM_WORLD, &SumID);
	/*根据主处理机获取必要信息，并分配工作*/
	if (MyID == 0)
	{
		DataSize = GetDataSize();
		data = (int  *)malloc(DataSize * sizeof(int));
		if (data == 0)
			ErrMsg("Malloc memory error!");
		srand(396);
		for (i = 0; i < DataSize; i++)
		{
			data[i] = (int)rand();
			printf("%10d", data[i]);
		}
		printf("\n");
	}
	m = log2(SumID);
	MPI_Bcast(&DataSize, 1, MPI_INT, 0, MPI_COMM_WORLD);
	para_QucikSort(data, 0, DataSize - 1, m, 0, MyID);

}