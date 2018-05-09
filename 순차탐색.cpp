// 순차탐색.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define qo 100
int finput(int*);
int search(int*, int);

int main()
{
	int arr[qo] = { 0 };
	int input;
	finput(arr);
	cin >> input;
	search(arr, input);
    return 0;
}

int search(int* arr, int input)
{
	int i;
	for (i = 0; i < qo; i++)
	{
		if (*(arr + i) == input)
		{
			break;
		}
	}
	printf("탐색결과 : %d번째 수, %d", i + 1, input);
	return 0;
}
int finput(int* arr)
{
	for (int i = 0; i < qo; i++)
	{
		*(arr + i) = i + 250;
		printf("%d번째 수 : %d\n", i+1, *(arr + i));
	}
	return 0;
}