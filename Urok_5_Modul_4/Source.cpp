#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define n 4
#define k 20
#define dni 31

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int nz;

	do
	{
		printf("������� ����� ������� ��� 0 ��� ������: ");
		scanf("%d", &nz);

		//1.	�������� ������ ���� �������� �� ������� ���������. ���������� ����� ������ ������� �������
		if (nz == 1)
		{
			int arr1[n] = { 0 };
			int arr2[n] = { 0 };
			int sum1 = 0, sum2 = 0;

			printf("������� ������ ������� �������: ");
			for (size_t i = 0; i < n; i++)
			{
				scanf("%d", &arr1[i]);
			}

			printf("������� ������ ������� �������: ");
			for (size_t i = 0; i < n; i++)
			{
				scanf("%d", &arr2[i]);
			}

			for (size_t i = 0; i < n; i++)
			{
				sum1 += arr1[i];
				sum2 += arr2[i];
			}

			printf("����� ������ ������� ������� = %d\n", sum1);
			printf("����� ������ ������� ������� = %d\n\n", sum2);
		}

		//2.	�������� ������� (� ����� � ���� 14,5 ��� � �. �.) ������� ������� ���� �������. 
		//���������� ������� ������� �������� ������� ������. � ������ ������ ������ 20 �������
		else if (nz == 2)
		{
			float arr1[k] = { 0 };
			float arr2[k] = { 0 };
			float sum1 = 0, sum2 = 0;

			printf("������� �������� ������� ������: \n");

			for (size_t i = 0; i < k; i++)
			{
				int temp1 = 1 + rand() % 9;
				int temp2 = 1 + rand() % 9;
				arr1[i] = 13.6 + (float)temp1 / 10;
				arr2[i] = 13.9 + (float)temp2 / 10;
				printf("%0.1f\t", arr1[i]);
			}
			printf("\n");

			printf("������� �������� ������� ������: \n");
			for (size_t i = 0; i < k; i++)
			{
				printf("%0.1f\t", arr2[i]);
				sum1 += arr1[i];
				sum2 += arr2[i];

			}
			printf("\n");
			printf("������� ������� �������� ������� ������ = %0.1f, � ������� = %0.1f\n\n", sum1 / k, sum2 / k);
		}

		//3.	�������� ���������� �������, �������� �� ������ ���� ������ � �����. 
		//���������� ������������� ���������� ������� �� ������ �����.
		else if (nz == 3)
		{
			int arr1[dni], arr3[dni];
			int sum1 = 0, sum3 = 0;

			printf("���������� �������, �������� �� ������ ���� ������:\n");
			for (size_t i = 0; i < dni; i++)
			{
				arr1[i] = 0 + rand() % 20;
				arr3[i] = 0 + rand() % 17;
				printf("%d\t", arr1[i]);
			}

			printf("\n");

			printf("���������� �������, �������� �� ������ ���� �����:\n");
			for (size_t i = 0; i < dni; i++)
			{
				printf("%d\t", arr3[i]);
				sum1 += arr1[i];
				sum3 += arr3[i];
			}

			printf("\n");
			printf("������������� ���������� ������� �� ������  = %0.1f, �� ���� = %0.1f\n\n", (double)sum1 / dni, (double)sum3 / dni);
		}

	}
	while (nz != 0);



}