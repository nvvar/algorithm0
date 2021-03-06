#include "stdafx.h"
#define qo 80
int sort(int*);
int search(int*,int,int, int);
void finput(int*);
int main()
{
	int a[qo] = { 0 };
	int initial=0;
	int input;
	finput(&input);
	sort(a);
	printf("\n\n%d", search(a, initial, initial,input));
	return 0;
}
int sort(int* arr)
{
	int temp;
	srand((unsigned)time(NULL));
	for (int i = 0; i < qo; i++)
	{
		*(arr+i) = rand() % qo * 3;
		/*if (*(a + i) == *(a + (i - 1)))
		{
			*(a + i) += 1;
			i--;
			continue;
		}*/
	}
	for (int i = 0; i < qo; i++)
	{
		for (int j = i+1; j < qo; j++)
		{
			if (*(arr + i) >= *(arr + j))
			{
				if (*(arr + i) == *(arr+j))
				{
					*(arr + j) = *(arr + j) + 1;
					continue;
				}
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
	for (int i = 0; i < qo; i++)
		printf("%2d 번째의 값 %2d\n", i + 1, *(arr + i));
	return 0;
}
int search(int* arr, int left, int right, int input)
{
	if ((left+right)==0)
	{
		left = 0; right = qo;
	}
	if (left > right)
	{
		return -1;
	}
	int mid=(left+right)/2;
	if (input > *(arr + mid))
	{
		left = mid+1;
		search(arr, left, right, input);
	}
	else if (input < *(arr + mid))
	{
		right = mid-1;
		search(arr, left, right, input);
	}
	else if(input == *(arr+mid))
	{
		return mid+1;
	}
}
void finput(int* input)
{
	cin >> *input;
}