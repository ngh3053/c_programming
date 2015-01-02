/*********************************************************************************************
*                                                                                            *
* Problem 15:                                                                                *
*          ���ڸ� ���� ����ϱ� (2)                                                          *
*                                                                                            *
*********************************************************************************************/

/*********************************************************************************************
*                                                                                            *
* ���δ��б� ����������Ŵ��� ��ǻ�Ͱ��к� 1�г�                                             *
*                                                                20143053 ������             *
*                                                                                            *
*********************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

void main(void)
{
	FILE *fp;
	int i, j;
	int no_cases, no_data;
	int result; // ������ ���ڸ����� ������ ����
	unsigned int num; // �ڿ����� ������ 1 ~ (2^31)-1

	fp = fopen("input.txt", "r");
	if (fp == NULL) exit(1);

	fscanf(fp, "%d", &no_cases); //---- �׽�Ʈ Ƚ�� �о����

	for (i = 0; i < no_cases; i++) //---- �׽�Ʈ �ݺ�
	{
		fscanf(fp, "%d", &no_data); //---- ���� ���� ���� �о����
		result = 1; // ������ ���� 1�� �ʱ�ȭ

		for (j = 0; j < no_data; j++) //---- ���� �ݺ�
		{
			fscanf(fp, "%d", &num); //---- ����Ÿ �о����

			result *= (num % 100); // ����Ÿ�� 100���� ���� �������� result�� ����
			result %= 100; // �����÷ο� ������ ���� result���� 100���� ���� �������� ����
		}

		printf("%d\n", result); // ������ ���ڸ��� ���
	}

	fclose(fp);
}