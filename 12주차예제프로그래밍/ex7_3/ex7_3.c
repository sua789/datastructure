#include <stdio.h>
#include "threadBT.h"
//조사식: n7,n6,n5,n4,n3,n2,n1,q,p 넣고 디버깅해보기. 처음에는 다 연결이 안되어 있음.
//기말고사 6월 11일 화. 오전 10시.
//디버깅할때 다른 곳으로 갈려면 f12 아니면 f11 눌러볼것.
//시험범위는 아마 정렬까지.
int main(void) {
	treeThNode* n7 = makeRootThNode('D', NULL, NULL, 0);
	treeThNode* n6 = makeRootThNode('C', NULL, NULL, 1);
	treeThNode* n5 = makeRootThNode('B', NULL, NULL, 1);
	treeThNode* n4 = makeRootThNode('A', NULL, NULL, 1);
	treeThNode* n3 = makeRootThNode('/', n6, n7, 0);
	treeThNode* n2 = makeRootThNode('*', n4, n5, 0);
	treeThNode* n1 = makeRootThNode('-', n2, n3, 0);

	n4->right = n2;
	n5->right = n1;
	n6->right = n3;

	printf("\n 스레드 이진 트리의 중위 순회: ");
	threadInorder(n1);

	getchar(); return 0;
}
