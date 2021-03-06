// 프로그래밍수업-철근.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
int input(int*, int*);
int process(int, int);
int output(int);
int main()
{
	int input_total, input_piece;
	input(&input_total, &input_piece);
	output(process(input_total, input_piece));
    return 0;
}

int process(int input_t, int input_p)
{
	if (input_t / input_p > 9999)
	{
		return -1;
	}
	else
	{
		return input_t / input_p;
	}
}

int input(int* input_t, int* input_p)
{
	cin >> *input_t >> *input_p;
	return 0;
}

int output(int max)
{
	if (max == -1)
	{
		printf("번호 초과 오류\n");
	}
	for (int i = 1; i <= max; i++)
	{
		printf("F-%04d\n", i);
	}
	return 0;
}