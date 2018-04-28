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
		printf("Введите номер задания или 0 для выхода: ");
		scanf("%d", &nz);

		//1.	Известны оценки двух учеников по четырем предметам. Определить сумму оценок каждого ученика
		if (nz == 1)
		{
			int arr1[n] = { 0 };
			int arr2[n] = { 0 };
			int sum1 = 0, sum2 = 0;

			printf("Введите оценки первого ученика: ");
			for (size_t i = 0; i < n; i++)
			{
				scanf("%d", &arr1[i]);
			}

			printf("Введите оценки второго ученика: ");
			for (size_t i = 0; i < n; i++)
			{
				scanf("%d", &arr2[i]);
			}

			for (size_t i = 0; i < n; i++)
			{
				sum1 += arr1[i];
				sum2 += arr2[i];
			}

			printf("Сумма оценок первого ученика = %d\n", sum1);
			printf("Сумма оценок второго ученика = %d\n\n", sum2);
		}

		//2.	Известен возраст (в годах в виде 14,5 лет и т. п.) каждого ученика двух классов. 
		//Определить средний возраст учеников каждого класса. В каждом классе учатся 20 человек
		else if (nz == 2)
		{
			float arr1[k] = { 0 };
			float arr2[k] = { 0 };
			float sum1 = 0, sum2 = 0;

			printf("Возраст учеников первого класса: \n");

			for (size_t i = 0; i < k; i++)
			{
				int temp1 = 1 + rand() % 9;
				int temp2 = 1 + rand() % 9;
				arr1[i] = 13.6 + (float)temp1 / 10;
				arr2[i] = 13.9 + (float)temp2 / 10;
				printf("%0.1f\t", arr1[i]);
			}
			printf("\n");

			printf("Возраст учеников второго класса: \n");
			for (size_t i = 0; i < k; i++)
			{
				printf("%0.1f\t", arr2[i]);
				sum1 += arr1[i];
				sum2 += arr2[i];

			}
			printf("\n");
			printf("Средний возраст учеников первого класса = %0.1f, а второго = %0.1f\n\n", sum1 / k, sum2 / k);
		}

		//3.	Известно количество осадков, выпавших за каждый день января и марта. 
		//Определить среднедневное количество осадков за каждый месяц.
		else if (nz == 3)
		{
			int arr1[dni], arr3[dni];
			int sum1 = 0, sum3 = 0;

			printf("количество осадков, выпавших за каждый день января:\n");
			for (size_t i = 0; i < dni; i++)
			{
				arr1[i] = 0 + rand() % 20;
				arr3[i] = 0 + rand() % 17;
				printf("%d\t", arr1[i]);
			}

			printf("\n");

			printf("количество осадков, выпавших за каждый день марта:\n");
			for (size_t i = 0; i < dni; i++)
			{
				printf("%d\t", arr3[i]);
				sum1 += arr1[i];
				sum3 += arr3[i];
			}

			printf("\n");
			printf("Среднедневное количество осадков за январь  = %0.1f, за март = %0.1f\n\n", (double)sum1 / dni, (double)sum3 / dni);
		}

	}
	while (nz != 0);



}