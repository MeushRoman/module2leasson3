#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <time.h>

void main()
{
	int n = 0;
	srand(time(NULL));

	setlocale(LC_ALL, "rus");

	do
	{
		printf("Введите номер задания = ");
		scanf("%d", &n);
#pragma region 1.Записать условие, которое является истинным, когда только одно из чисел X, Y и Z кратно пяти.

		if (n == 1)
		{
			printf("1.	Записать условие, которое является истинным, когда только одно из чисел X, Y и Z кратно пяти.\n");

			int x = 0, y = 0, z = 0;

			x = 1 + rand() % 1000;
			y = 1 + rand() % 1000;
			z = 1 + rand() % 1000;

			if (x % 5 == 0 && y % 5 != 0 && z % 5 != 0)
				printf("условие является истинным x = %d\n", x);
			else if ((x % 5 != 0 && y % 5 == 0 && z % 5 != 0))
				printf("условие является истинным y = %d", y);
			else if (x % 5 != 0 && y % 5 != 0 && z % 5 == 0)
				printf("условие является истинным z = %d\n", z);
			else
				printf("Условие ложно!\n");
		}
#pragma endregion
#pragma region 2.Записать условие, которое является истинным, когда хотя бы одно из чисел X, Y и Z больше 80
		else if (n == 2)
		{
			printf("2.	Записать условие, которое является истинным, когда хотя бы одно из чисел X, Y и Z больше 80\n");

			int x, y, z;
			x = 60 + rand() % 40;
			y = 60 + rand() % 40;
			z = 60 + rand() % 40;

			printf("x = %d  y = %d  z = %d\n", x, y, z);

			if (x > 80 || y > 80 || z > 80)
				printf("Условие истино!\n");
			else
				printf("условие ложно\n");
		}
#pragma endregion
#pragma region 3.Записать логическое выражение, которые определяют, что число А не принадлежит   интервалу  от -10 до -1 или интервалу от 2 до 15
		else if (n == 3)
		{
			printf("3.	Записать логическое выражение, которые определяют, что число А не принадлежит   интервалу  от -10 до -1 или интервалу от 2 до 15.\n");

			int a = -20 + rand() % 40;

			printf("A = %d\n", a);

			if ((a >= -10 && a <= -1) || (a >= 2 && a <= 15))
				printf("число А принадлежит интервалу от -10 до -1 или интервалу от 2 до 15.\n");
			else
				printf("число А не принадлежит интервалу от -10 до -1 или интервалу от 2 до 15.\n");
		}
#pragma endregion
#pragma region 4.Записать логическое выражение, которые определяет, что число А является четырехзначным, но не равно 4999.

		else if (n == 4)
		{
			printf("4.	Записать логическое выражение, которые определяет, что число А является четырехзначным, но не равно 4999.\n");

			int a = 1 + rand() % 9999;

			printf("a = %d\n", a);

			if (a >= 1000 && a != 4999 && a < 10000) printf("число А является четырехзначным, но не равно 4999\n"); else printf("Условие не верно");
		}
#pragma endregion
#pragma region 5.Записать логическое выражение, определяющее какая дробь больше А / B или C / D

		else if (n == 5) {
			printf("5.Записать логическое выражение, определяющее какая дробь больше А / B или C / D\n");

			int a = 1 + rand() % 100, b = 1 + rand() % 100, c = 1 + rand() % 100, d = 1 + rand() % 100;

			printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);

			if ((a / b) > (c / d)) 
				printf("Дробь А/B больше!\n"); 
			else 
				printf("Дробь C/D больше!\n");
		}
#pragma endregion
#pragma region 6.Даны координаты поля шахматной доски х, у (целые числа, лежащие в диапазоне 1-8)
		else if (n == 6) {
			printf("6.	Даны координаты поля шахматной доски х, у (целые числа, лежащие в диапазоне 1-8) Учитывая, что левое нижнее поле доски (1,1) является черным, проверить истинность высказывания: “Данное поле является белым”\n");

			int x = 1 + rand() % 8, y = 1 + rand() % 8;
			printf("x = %d  y = %d\n", x, y);
			if (x % 2 == 0 || y % 2 == 0)
				printf("цвет белый\n");
			else
				printf("цвет черный\n");
		}
#pragma endregion
#pragma region 7.Даны координаты двух разных полей шахматной доски х1, у1, ч2, у2 (целые числа, лежащие в диапазоне 1-8).
		else if (n == 7) {
			printf("7.	Даны координаты двух разных полей шахматной доски х1, у1, ч2, у2 (целые числа, лежащие в диапазоне 1-8). Проверить истинность высказывания: «Ладья за один ход может перейти с одного поля на другое»\n");

			int x1 = 1 + rand() % 8, x2 = 1 + rand() % 8, y1 = 1 + rand() % 8, y2 = 1 + rand() % 8;

			printf("x1 = %d  x2 = %d y1 = %d y2 = %d\n", x1, x2, y1, y2);

			if (y2 == y1)
				printf("Ладья за один ход может перейти с одного поля на другое\n");
			else printf("Ладья за один ход не может перейти с одного поля на другое\n");
		}
#pragma endregion
#pragma region 8.Вычислить значение логического выражения при следующих значениях логических величин А, В и С
		else if (n == 8) {
			printf("8.	Вычислить значение логического выражения при следующих значениях логических величин А, В и С: А = Истина, В = Ложь, С = Ложь:\n");
			printf("a.	А или В и не С;\n");
			printf("b.	не А и не В;\n");
			printf("c.	не (А и С) или В;\n");
			printf("d.	А и не В или С;\n");
			printf("e.	А или (не (В и С)).\n\n");

			int a = 1, b = 0, c = 0;

			if (a || b && !c)
				printf("a. true\n");
			else  ("a. false;"); 
			if (!a && !b)
				printf("b. true\n"); 
			else  printf("b. false\n");
			if (!(a && c) || b) 
				printf("c. true\n"); 
			else  printf("c. false\n");
				if (a && !b || c) 
				printf("d. true\n");
			else printf("d. false\n");
			if (a || (!(b && c)))
				printf("e. true\n");
			else printf("e. false\n");
		}
#pragma endregion
#pragma region 9.Вычислить значение логического выражения

		else if (n == 9) {

			printf("9.Вычислить значение логического выражения:\n");
			printf("a.	(x >= 0) или(y2 != 4) при x = 1, y = 2;\n");
			printf("b.	(x >= 0) и(y2 != 4) при x = 1, y = 2;\n");
			printf("c.	(x · у != 0) и(у > x) при x = 2, y = 1;\n");
			printf("d.	(x · у != 0) или(у < x) при x = 2, y = 1;\n\n");

			int x = 1, y = 2;

			if (x >= 0 || pow(y, 2) != 4) 
				printf("a. true\n");
			else printf("a. false\n");

			if (x >= 0 && pow(y, 2) != 4)
				printf("b. true\n");
			else printf("b. false\n");

			x = 2, 
			y = 1;

			if (x*y!= 0 || y > x )
				printf("c. true\n");
			else printf("c. false\n");

			if (x*y != 0 || y < x)
				printf("d. true\n");
			else printf("d. false\n");
		}

#pragma endregion
#pragma region 10.	Вычислить значение логического выражения при всех возможных значениях логических величин X и Y:
		else if (n == 10) {
			printf("10.	Вычислить значение логического выражения при всех возможных значениях логических величин X и Y :\n");
			printf("a. не(X или Y)\n");
			printf("b. не X и Y\n");
			printf("c. X и не Y\n\n");

			int x = 0 + rand() % 1, y = 0 + rand() % 1;

			printf("при значениях x = %d и y = %d\n\n", x, y);

			if (!(x || y))
				printf("a. true\n");
			else
				printf("a. false\n");
			if (!x && y) 
				printf("b. true\n");
			else
				printf("b. false\n");
			if (x && !y)
				printf("c. true\n");
			else
				printf("c. false\n");
		}


#pragma endregion


		



	} while (n > 0);

}