#include "stdafx.h"
#define Lspace 10
int spacef(int);
void process(int);
int input;
int main()
{
	cin >> input;
	process(spacef(input));
	return 0;
}

void process(int space)
{
	int wnf, j, k = 1, mst = 1;
	wnf = space;
	for (int i = 1; i <= input; i++)
	{
		if (i % 4 == 1)
		{
			if (i != 1)
			{
				mst += 4;
			}
			space -= 4;
			k = 1;
		}
		for (j = 1; j <= space - ((space / 2) - k) + 2+Lspace; j++)
		{
			printf(" ");
		}
		for (j = mst; j < i * 2;j++)
		{
			printf("*");
		}
		if (j >= i * 2)
		{
			k--;
		}

		printf("\n");
	}
	for (int i = 0; i < wnf / 4;i++)
	{
		for (j = 0; j < wnf / 4 + 1+Lspace; j++)
		{
			printf(" ");
		}
		for (j = 0; j < wnf / 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int spacef(int input)
{
	for (int i = input; i <= input + 4; i++)
	{
		if (i % 4 == 0)
		{
			return i;
		}
	}
}

