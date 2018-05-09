// 버블정렬.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define qo 100

int main()
{
	int a[qo] = { 0 };
	int temp;
	srand((unsigned)time(NULL));
	for (int i = 0; i < qo; i++)
	{
		*(a + i) = rand() % qo * 3;
	}
	for (int i = 0; i < qo; i++)
	{
		for (int j = i; j < qo; j++)
		{
			if (*(a + i) > *(a + j))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	for (int i = 0; i < qo; i++)
		printf("%d\t", *(a + i));
    return 0;
}

