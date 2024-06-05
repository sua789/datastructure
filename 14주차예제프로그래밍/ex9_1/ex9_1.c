#include <stdio.h>
void SelectionSort(int a[], int size);
//조사식에 list, size, min, a[0],a[1]추가. 5번째줄에브레이크포인트
int main(void) {
	int i, list[8] = { 69,10,30,2,16,8,31,22 };  //정렬할 원소
	int size = sizeof(list) / sizeof(list[0]);
	printf("\n정렬할 원소: ");
	for (i = 0; i < size; i++)
		printf("%d ", list[i]);
	printf("\n\n<<<<<<<<<< 선택 정렬 수행 >>>>>>>>>>\n");
	SelectionSort(list, size);//더블클릭하고 f12 누르면 함수정의한 곳으로 갈 수 있다

	getchar(); return 0;
}
