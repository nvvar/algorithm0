// star_star.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
void one(int*, int*,int,int);
void two(int*, int*,int,int);
void three(int*, int*,int,int);
void four(int*, int*,int,int);
void process(int);
int input();
int main()
{
	process(input());
    return 0;
}

void one(int* space, int*star, int input, int i)
{
	*space = (input * 3 - 2) - i;
	*star = (i + 1) * 2 - 1;
}
void two(int* space, int*star, int input, int i)
{
	*space = i - input;
	*star = (input * 2 - 1) * 3 - (i - input) * 2;
}
void three(int* space, int*star, int input, int i)
{
	*space = input - 1 - (i%input);
	*star = (i * 2) - 1;
}
void four(int* space, int*star, int input, int i)
{
	*space = input + (i - (input * 2 + 1));
	*star = input * 2 - 1 - ((i - input * 3) * 2);
}
void process(int input)
{
	int  i, j, space, star;
	for (i = 0; i < input * 4; i++)
	{
		if (i / input == 0)
		{
			/*space = (input * 3 - 2) - i;
			star = (i + 1) * 2-1;*/
			one(&space, &star, input, i);
		}
		else if (i / input == 1)
		{
			/*space = i - input;
			star = (input * 2 - 1)*3 - (i - input) * 2;*/ //((3-1)*2-1)*3-(3-3)*2 = 9-0
			two(&space, &star, input, i);
		}
		else if (i / input == 2)
		{
			/*space = input - 1 - (i%input);
			star = (i * 2) - 1;*/
			three(&space, &star, input, i);
		}
		else if (i / input == 3)
		{
			/*space = input + (i - (input * 2 + 1));
			star = input * 2 - 1 - ((i - input*3) * 2);*/
			four(&space, &star, input, i);
		}
		for (j = 0;j<space;j++)
		{
			printf(" ");
		}
		for (j = 0;j < star;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int input()
{
	int input;
	cin >> input;
	return input;
}