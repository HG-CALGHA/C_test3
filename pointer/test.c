#include<stdio.h>

/*
ָ��
	ָ����������ŵ�ַ�ģ���ַ��Ψһ��ʶ��ַ�ռ��
	ָ��Ĵ�С��32λƽ̨��4�ֽڣ���64λƽ̨��8�ֽ�

ָ���ָ������
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
		// ָ�����;�����ָ����н����ò���ʱ�ܷ��ʵĿռ��С �磺int *p; *p�ɷ���4���ֽڣ� char *p; *p�ɷ���1�ֽ�
		printf("%p\n", pa);
		printf("%p\n", pc);
	*/
	/*
		//ָ��+���� ָ�����;�����ָ���ַ���ƽ�ƶ����ֽ�
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
		//Ӧ�ã�
		int arr[10] = { 0 };
		int* p = arr;
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 1;
		}
	*/
	
	
	/*
		Ұָ�룺δ��ʼ����ָ��
		ָ��Խ��Ҳ�����Ұָ��
		int arr[10] = { 0 };
		int* p = arr;
		for (int i = 0; i < 10; i++)
		{
			*(p + i) = 1;
		}
	
		ָ��ռ��ͷ�
		test()�ڷ���ָ���ַ��������ͷſռ䣬������ͷſռ�����޸�Ҳ�����Ұָ��
		
		int *p = test();
		*p = 20;
		 
		��ι��Ұָ��
			1 ָ���ʼ��
			2 ָ�벻Խ��
			3 ָ��ָ��ռ��ͷż�ʹ��NULL
			4 ָ��ʹ��֮ǰ�����Ч��
	*/
	
}
