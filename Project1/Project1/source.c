#include <stdio.h> // �����Ϸ��� ������ �������� ã�� stdio>>standard input,output ������� ����
//#include <stdint.h> //# : ��ó����



void fun();

int main()
{
	printf("������ ��¥ : %s \n", __DATE__); //���������� Ŀ���� �� ��¥�� ġȯ

	printf("������ �ð� : %s \n", __TIME__); //�ð�
	printf("������ ��¥ ���� �ð� : %s \n", __TIMESTAMP__); //��¥, �ð� --> ���ڿ�
	printf("���ι�ȣ : %d\n", __LINE__); //���� ��ũ�ΰ� ȣ��� ���ι�ȣ
	fun(); //������� ���� �Լ�
	printf("����ҽ�������ġ : %s\n", __FUNCTION__); //���� ��ũ�ΰ� ȣ��� �Լ������� ġȯ 

	return 0;
}

void fun()
{
	printf("���� : %s\n", __FUNCTION__);
}
