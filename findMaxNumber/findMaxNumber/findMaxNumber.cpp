// findMaxNumber.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

using namespace std;

int findMaxNum(int *a, int len)
{
	if (len == 1)
	{
		return a[0];
	}

	int low = 0;
	int high = len - 1;

	int mid = (low+high) / 2;

	int pre = 0;
	int last = 0;

	while (low<high && low>=0 && high<=len-1)
	{
		mid = (low + high) / 2;

		pre = mid - 1;
		last = mid + 1;

		if (a[mid] > a[pre] && a[mid]>a[last])
		{
			return a[mid];
		}
		else if (a[mid]>a[pre] && a[mid]<a[last])
		{
			low = mid;
		}
		else if (a[mid]<a[pre]&&a[mid]>a[last])
		{
			high = last;
		}
	}
}

void showArray(int *a, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a[] = {1,7,6,5,4,3,2};

	int len = sizeof(a) / sizeof(a[0]);

	showArray(a, len);

	int max = findMaxNum(a, len);

	cout << max << endl;

    std::cout << "Hello World!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
