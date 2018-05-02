
#include "stdafx.h"
#define qo 10
int a[qo] = { 0 };
void substitute();
int quicksort(int, int);
void swap(int*, int*);
int output();

int main()
{
	substitute();
	quicksort(0, qo - 1);
	output();
	return 0;
}

int quicksort(int left, int right)
{
	if (left > right)
	{
		return 0;
	}
	int high = right, low = left, pivot = left;
	while (1)
	{
		while (low < qo)
		{
			if (*(a + pivot) < *(a + low))
			{

				break;
			}
			low++;
		}
		while (high > 0)
		{
			if (*(a + pivot) > *(a + high))
			{
				if (low >= high)
				{
					for (;pivot < high;pivot++)
					{
						swap((a + pivot), (a + (pivot + 1)));
					}
					return 0;
				}
				printf("스왑 전%d %d \n", *(a + low), *(a + high));
				swap((a + low), (a + high));
				printf("스왑 후%d %d \n", *(a + low), *(a + high));
				break;
			}
			high--;
		}
	}
	return 0;
}

int output()
{
	for (int i = 0; i < qo; i++)
	{
		printf("%d\n", *(a + i));
	}
	return 0;
}

void swap(int* low, int*high)
{
	int temp;
	temp = *high;
	*high = *low;
	*low = temp;
}

void substitute()
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < qo; i++)
	{
		*(a + i) = rand() % (qo * 3);
		if (*(a + i) == *(a + (i - 1)))
		{
			*(a + i) += 1;
		}
		printf("%d\n", *(a + i));
	}
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
}
