// 이분탐색.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define qo 80
int process();

int main()
{
	printf("%d번째의 값.\n",process());
    return 0;
}
int process()
{
	int a[qo], input, start = 0, end = qo-1, mid;
	for (int i = 0; i < qo; i++)
	{
		*(a + i) = i*6+1+5/2+6;
		printf("%2d: %d\n", i + 1, *(a + i));
	}
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
