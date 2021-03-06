// stack.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define ST 10000
int stack[ST] = {0};
void push(int);
void empty();
int top();
void pop();
void size();

int main()
{
	string inputS;
	int pushVal;
	cout << "push, empty, top, pop, size \n";
	while (1) {
		cin >> inputS;
		if (inputS == "push")
		{
			cin >> pushVal;
			push(pushVal);
		}
		else if (inputS == "empty")
		{
			empty();
		}
		else if (inputS == "top")
		{
			cout << top() <<"\n";
		}
		else if (inputS == "pop")
		{
			pop();
		}
		else if (inputS == "size")
		{
			size();
		}
		else if (inputS == "esc")
		{
			return 0;
		}
	}
}
void push(int pushVal)
{
	for (int i = 0; i < ST; i++)
	{
		if (*(stack + i) == 0)
		{
			*(stack + i) = pushVal;
			break;
		}
	}
}
void empty()
{
	if (stack[0] == NULL)
	{
		cout << "1\n";
	}
	else
	{
		cout << "0\n";
	}
}
int top()
{
	if (*stack== 0)
	{
		return -1;
	}
	else
	return stack[0];
}
void pop()
{
	for (int i = 0; i < ST; i++)
	{
		if (*(stack + i) == 0)
		{
			cout << *(stack + i - 1) << "\n";
			*(stack + i - 1) = NULL;
			break;
		}
	}
}
void size()
{
	for (int i = 0; i < ST; i++)
	{
		if (*(stack + i) == 0)
		{
			cout << i << "\n";
			break;
		}
	}
}