// sky.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "In swap:a= " << a << "      b=" << b << endl;
}
int main()
{
	{
		int a = 4;
		int b = 5;
		swap(a, b);
		cout << "In swap:a = " << a << "b = " << b;
	}
	return 0;
}

