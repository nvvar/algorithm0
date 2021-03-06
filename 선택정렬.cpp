// 선택정렬.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define qo 10
int a[qo] = { 0 };
void subst();
void sort();
void swap(int*, int*);
void output();
int main()
{
	subst();
	sort();
	output();
    return 0;
}

void subst()
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < qo; i++)
	{
		*(a + i) = rand() % (qo * 3);
		printf("%d\n", *(a + i));
	}
}

void sort()
{
	int i, j, k;
	for (i = 0; i < qo; i++)
	{
		for (j = i; j < qo;j++)
		{
			if (*(a + i) > *(a + j))
			{
				for (k = j;k < qo;k++)
				{
					swap((a + i), (a + k));
					continue;
				}
			}
		}
		swap((a + i), (a + j));
	}
}
void swap(int* num1, int* num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void output()
{
	printf("\n\n\n");
	for (int i = 0; i < qo; i++)
	{
		printf("%d\n", *(a + i));
	}
}