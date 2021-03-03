#include<stdio.h>

/*
指针
	指针是用来存放地址的，地址是唯一标识地址空间的
	指针的大小在32位平台是4字节，在64位平台是8字节

指针和指针类型
*/

int* test() {
	int a = 10;
	return &a;
}

int main() {
	/*
		printf("%d\n", sizeof(char*));
		printf("%d\n", sizeof(short*));
		printf("%d\n", sizeof(int*));
		printf("%d\n", sizeof(double*));


		int a = 0x11223344;
		int* pa = &a;
		//*pa = 0;
		char* pc = &a;
		//*pc = 0;
		// 指针类型决定了指针进行解引用操作时能访问的空间大小 如：int *p; *p可访问4个字节， char *p; *p可访问1字节
		printf("%p\n", pa);
		printf("%p\n", pc);
	*/
	/*
		//指针+整数 指针类型决定了指针地址向后平移多少字节
		int n = 10;
		char* pa = (char*)&n;
		int* pi = &n;
		printf("%p\n", &n);
		printf("%p\n", pa);
		printf("%p\n", pa+1);
		printf("%p\n", pi);
		printf("%p\n", pi+1);
	*/
	/*
		//应用：
		int arr[10] = { 0 };
		int* p = arr;
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 1;
		}
	*/
	
	
	/*
		野指针：未初始化的指针
		指针越界也会造成野指针
		int arr[10] = { 0 };
		int* p = arr;
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 1;
		}
	
		指针空间释放
		test()在返回指针地址后会立刻释放空间，因此在释放空间后在修改也会造成野指针
		
		int *p = test();
		*p = 20;
		 
		如何规避野指针
			1 指针初始化
			2 指针不越界
			3 指针指向空间释放即使置NULL
			4 指针使用之前检查有效性
	*/
	
}
