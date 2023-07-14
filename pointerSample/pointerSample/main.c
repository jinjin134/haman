
#include <stdio.h> //표준함수,구조체
#include <malloc.h> //메모리공간확보 heap 영역

char buf[100];
void MemoryDump(int start, int length); //함수의 원형,프로토타입

int main(int argc, char *argv[]) // >pointerSample 10000 500: //Command Line 명령어
								 // 10000:Start mamory 주소
								 // 500  :Dump할 메모리 크기
{	int start = 0x09000000;
	int length = 500;


	char c = 'A';    // %c
	int i = 1;       // %d
	float a = 2.0;   // %f
	double d = 3.14; // %f
	void *p = malloc(100);//(void*)buf; 

	*(double *)p = d;
	MemoryDump((int)buf, length);

	//printf("c = %8c [0x%8x]\n", c, &c); //변수값 ,[변수의 주소]
	//printf("i = %8d [0x%8x]\n", i, &i);
	//printf("f = %8f [0x%8x]\n", a, &a);
	//printf("d = %8f [0x%8x]\n", d, &d);
	//printf("p = %8f [0x%8x]\n", *(double*)p, p);
}


void MemoryDump(int start, int length)
{
	void *vp = (void *)start;
	int i = 0; //index 변수 초기값

	while (i < length)    //수행조건 // for, do~while사용가능
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