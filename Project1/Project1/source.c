#include <stdio.h> // 컴파일러에 지정된 폴더에서 찾음 stdio>>standard input,output 입출력의 모든것
//#include <stdint.h> //# : 전처리기



void fun();

int main()
{
	printf("컴파일 날짜 : %s \n", __DATE__); //마지막으로 커파일 된 날짜로 치환

	printf("컴파일 시간 : %s \n", __TIME__); //시간
	printf("컴파일 날짜 요일 시간 : %s \n", __TIMESTAMP__); //날짜, 시간 --> 문자열
	printf("라인번호 : %d\n", __LINE__); //현재 매크로가 호출된 라인번호
	fun(); //사용자의 정의 함수
	printf("현재소스파일위치 : %s\n", __FUNCTION__); //현재 매크로가 호출된 함수명으로 치환 

	return 0;
}

void fun()
{
	printf("현재 : %s\n", __FUNCTION__);
}
