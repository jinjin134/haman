
#include <stdio.h> //ǥ���Լ�,����ü
#include <malloc.h> //�޸𸮰���Ȯ�� heap ����

char buf[100];
void MemoryDump(int start, int length); //�Լ��� ����,������Ÿ��

int main(int argc, char *argv[]) // >pointerSample 10000 500: //Command Line ��ɾ�
								 // 10000:Start mamory �ּ�
								 // 500  :Dump�� �޸� ũ��
{	int start = 0x09000000;
	int length = 500;


	char c = 'A';    // %c
	int i = 1;       // %d
	float a = 2.0;   // %f
	double d = 3.14; // %f
	void *p = malloc(100);//(void*)buf; 

	*(double *)p = d;
	MemoryDump((int)buf, length);

	//printf("c = %8c [0x%8x]\n", c, &c); //������ ,[������ �ּ�]
	//printf("i = %8d [0x%8x]\n", i, &i);
	//printf("f = %8f [0x%8x]\n", a, &a);
	//printf("d = %8f [0x%8x]\n", d, &d);
	//printf("p = %8f [0x%8x]\n", *(double*)p, p);
}


void MemoryDump(int start, int length)
{
	void *vp = (void *)start;
	int i = 0; //index ���� �ʱⰪ

	while (i < length)    //�������� // for, do~while��밡��
	{	
		char *cp = buf;
		//char *cp = (char *)vp;
		//char c = *cp;
		//i++;
		unsigned char c = *((char *)cp + i);
		printf("0x%02x  ", c, &c);
		i++;
	}

}