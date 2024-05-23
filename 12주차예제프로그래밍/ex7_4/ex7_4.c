#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "bst.h"
//조사식에 root,key,p->key,p->left,p->right
void menu(void);

int main(void) {
	treeNode* root = NULL;
	treeNode* foundedNode = NULL;
	char choice, key;

	root = insertBSTNode(root, 'G');
	insertBSTNode(root, 'I');
	insertBSTNode(root, 'H');
	insertBSTNode(root, 'D');
	insertBSTNode(root, 'B');
	insertBSTNode(root, 'M');
	insertBSTNode(root, 'N');
	insertBSTNode(root, 'A');
	insertBSTNode(root, 'J');
	insertBSTNode(root, 'E');
	insertBSTNode(root, 'Q');

	while (1) {
		menu();
		scanf(" %c", &choice);

		switch (choice - 'O') {
		case 1: printf("\t[이진 트리 출력]  ");
			displayInorder(root); printf("\n");
			break;

		case 2: printf("삽입할 문자를 입력하세요: ");
			scanf(" %c", &key);
			insertBSTNode(root, key);
			break;

		case 3: printf("삭제할 문자를 입력하세요: ");
			scanf(" %c", &key);
			deleteBSTNode(root, key);
			break;

		case 4: printf("찾을 문자를 입력하세요: ");
			scanf(" %c", &key);
			foundedNode = searchBST(root, key);
			if (foundedNode != NULL)
				printf("\n %c를 찾았습니다! \n", foundedNode->key);
			else printf("\n 문자를 찾지 못했습니다. \n");
			break;

		case 5:    return 0;

		default: printf("없는 메뉴입니다. 메뉴를 다시 선택하세요! \n");
			break;
		}
	}
}

void menu(void) {
	printf("*----------------------------*");
	printf("\n\t1: 트리 출력");
	printf("\n\t2: 문자 삽입");
	printf("\n\t3: 문자 삭제");
	printf("\n\t4: 문자 검색");
	printf("\n\t5: 종료");
	printf("\n*----------------------------*");
	printf("\n메뉴입력 >> ");
}
