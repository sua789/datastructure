#include <stdio.h>
void bubbleSort(int a[], int size);
//list ,size,j<i,a[j] > a[j + 1],temp, a[0],a[1]�߰�
int main(void) {
	int i, list[8] = { 69,10,30,2,16,8,31,22 };  //������ ����
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n������ ����: ");
	for (i = 0; i < size; i++)
		printf("%d ", list[i]);
	printf("\n\n<<<<<<<<< ���� ���� ���� >>>>>>>>>>>>\n");
	bubbleSort(list, size);

	getchar(); return 0;
}