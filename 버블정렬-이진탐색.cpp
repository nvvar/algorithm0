// 버블정렬-이진탐색.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define qo 80
int sort();
int search();
int a[qo] = { 0 };
int main()
{
	sort();
	printf("%d",search());
    return 0;
}
int sort()
{
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
			if (*(a + i) >= *(a + j))
			{
				if (*(a + i) == *(a + j))
				{
					*(a + j) += 1;
				}
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	for (int i = 0; i < qo; i++)
		printf("%2d 번째의 값 %2d\n", i+1,*(a + i));
	return 0;
}
int search()
{
	int input, start = 0, end = qo - 1, mid;
	printf("\n");
	cin >> input;
	while (1)
	{
		mid = (start + end) / 2;
		if (input >= a[mid])
		{
			if (input == a[mid])
			{
				return mid + 1;
			}
			start = mid + 1;
		}
		else if (input < a[mid])
		{
			end = mid - 1;
		}
		if (start> end)
		{
			return -1;
		}
	}
}
