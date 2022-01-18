#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {

	int num, temp;
	int cnt = 0;
	int array[1000];

	printf("넣을 숫자 :");
	scanf_s("%d", &num);
	while (num)
	{	
		printf("count : %d\n", cnt);
		printf("개수만큼 넣기->");
		scanf_s("%d", &array[cnt]);	// scanf_s 배열 또한 주소 형태로
		cnt++;
		num--;
		printf("num : %d\n", num);
	}
	
	printf("총 count : %d\n", cnt);
	for (int i = 0; i < cnt; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n");

	for (int i = 0; i < cnt; i++)	// 전체 개수
	{
		int flag = 0;
		for (int j = 0; j < cnt-i-1; j++)	// 버블 횟수
		{
			if (array[j] > array[j+1])
			{
				printf("num1 = %d, num2 = %d\n", array[j], array[j+1]);
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;

				flag = 1;
			}
		}
		if (flag == 0) break;
	}

	
	for (int i = 0; i < cnt; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}