/********************************************************************
*                                                                   *
* Problem 20 :                                                      *
*           다이아몬드 모양 출력하기                                *
*                                                                   *
*********************************************************************/
/********************************************************************
*                                                                   *
* 국민대학교 전자정보통신대학 컴퓨터공학부 1학년                    *
*                                               20143053  남규현    *
*                                                                   *
*********************************************************************/


#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

void print_diamond(int n); // 다이아몬드 모양 출력 함수
int abs(int n); // 절댓값 출력 함수

void main(void)
{
	FILE *fp;
	int no_cases, data;
	int i;

	fp = fopen("input.txt", "r");
	if (fp == NULL) exit(1);

	fscanf(fp, "%d", &no_cases); // 테스트 횟수 읽어오기

	for (i = 0; i<no_cases; i++) // 테스트 반복
	{
		fscanf(fp, "%d", &data); // 데이타 읽어오기

		print_diamond(data); // 크기가 data인 다이아몬드 모양 출력
	}

	fclose(fp);
}

void print_diamond(int n)
{
	int t;
	int i, j, k;

	t = (n - 1) / 2;

	for (i = -t; i <= t; i++) // 1줄씩 출력하는 부분
	{
		for (j = 0; j < abs(i); j++)
		{
			printf("*");
		} // * 출력

		for (k = 0; k < (n - (2 * abs(i))); k++)
		{
			printf("+");
		} // + 출력

		for (j = 0; j < abs(i); j++)
		{
			printf("*");
		} // * 출력

		printf("\n"); // 엔터
	} 
}

/* 예를들어 크기가 5인 모양이면 1에서 5번째 줄을 -2에서 2번째줄이라 생각한다.
   각 줄에서 *, +, * 순서로 출력하고 엔터를 친다. 
   -2번째 줄 * 2개 + 1개 * 2개순으로
   -1번째 줄 * 1개 + 3개 * 1개순으로
    0번째 줄 * 0개 + 5개 * 0개순으로
    1번째 줄 * 1개 + 3개 * 1개순으로
    2번째 줄 * 2개 + 1개 * 2개순으로 출력한다.
	
	크기가 n인 모양이면 -(n - 1) / 2에서 (n - 1) / 2번째 줄이라 생각한다.
	이때, t = (n - 1) / 2로 정의한다. */

int abs(int n)
{
	if (n >= 0)
		return n;
	else
		return -n;
}