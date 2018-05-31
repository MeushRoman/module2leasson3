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
		printf("������� ����� ������� = ");
		scanf("%d", &n);
#pragma region 1.�������� �������, ������� �������� ��������, ����� ������ ���� �� ����� X, Y � Z ������ ����.

		if (n == 1)
		{
			printf("1.	�������� �������, ������� �������� ��������, ����� ������ ���� �� ����� X, Y � Z ������ ����.\n");

			int x = 0, y = 0, z = 0;

			x = 1 + rand() % 1000;
			y = 1 + rand() % 1000;
			z = 1 + rand() % 1000;

			if (x % 5 == 0 && y % 5 != 0 && z % 5 != 0)
				printf("������� �������� �������� x = %d\n", x);
			else if ((x % 5 != 0 && y % 5 == 0 && z % 5 != 0))
				printf("������� �������� �������� y = %d", y);
			else if (x % 5 != 0 && y % 5 != 0 && z % 5 == 0)
				printf("������� �������� �������� z = %d\n", z);
			else
				printf("������� �����!\n");
		}
#pragma endregion
#pragma region 2.�������� �������, ������� �������� ��������, ����� ���� �� ���� �� ����� X, Y � Z ������ 80
		else if (n == 2)
		{
			printf("2.	�������� �������, ������� �������� ��������, ����� ���� �� ���� �� ����� X, Y � Z ������ 80\n");

			int x, y, z;
			x = 60 + rand() % 40;
			y = 60 + rand() % 40;
			z = 60 + rand() % 40;

			printf("x = %d  y = %d  z = %d\n", x, y, z);

			if (x > 80 || y > 80 || z > 80)
				printf("������� ������!\n");
			else
				printf("������� �����\n");
		}
#pragma endregion
#pragma region 3.�������� ���������� ���������, ������� ����������, ��� ����� � �� �����������   ���������  �� -10 �� -1 ��� ��������� �� 2 �� 15
		else if (n == 3)
		{
			printf("3.	�������� ���������� ���������, ������� ����������, ��� ����� � �� �����������   ���������  �� -10 �� -1 ��� ��������� �� 2 �� 15.\n");

			int a = -20 + rand() % 40;

			printf("A = %d\n", a);

			if ((a >= -10 && a <= -1) || (a >= 2 && a <= 15))
				printf("����� � ����������� ��������� �� -10 �� -1 ��� ��������� �� 2 �� 15.\n");
			else
				printf("����� � �� ����������� ��������� �� -10 �� -1 ��� ��������� �� 2 �� 15.\n");
		}
#pragma endregion
#pragma region 4.�������� ���������� ���������, ������� ����������, ��� ����� � �������� ��������������, �� �� ����� 4999.

		else if (n == 4)
		{
			printf("4.	�������� ���������� ���������, ������� ����������, ��� ����� � �������� ��������������, �� �� ����� 4999.\n");

			int a = 1 + rand() % 9999;

			printf("a = %d\n", a);

			if (a >= 1000 && a != 4999 && a < 10000) printf("����� � �������� ��������������, �� �� ����� 4999\n"); else printf("������� �� �����");
		}
#pragma endregion
#pragma region 5.�������� ���������� ���������, ������������ ����� ����� ������ � / B ��� C / D

		else if (n == 5) {
			printf("5.�������� ���������� ���������, ������������ ����� ����� ������ � / B ��� C / D\n");

			int a = 1 + rand() % 100, b = 1 + rand() % 100, c = 1 + rand() % 100, d = 1 + rand() % 100;

			printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);

			if ((a / b) > (c / d)) 
				printf("����� �/B ������!\n"); 
			else 
				printf("����� C/D ������!\n");
		}
#pragma endregion
#pragma region 6.���� ���������� ���� ��������� ����� �, � (����� �����, ������� � ��������� 1-8)
		else if (n == 6) {
			printf("6.	���� ���������� ���� ��������� ����� �, � (����� �����, ������� � ��������� 1-8) ��������, ��� ����� ������ ���� ����� (1,1) �������� ������, ��������� ���������� ������������: ������� ���� �������� �����\n");

			int x = 1 + rand() % 8, y = 1 + rand() % 8;
			printf("x = %d  y = %d\n", x, y);
			if (x % 2 == 0 || y % 2 == 0)
				printf("���� �����\n");
			else
				printf("���� ������\n");
		}
#pragma endregion
#pragma region 7.���� ���������� ���� ������ ����� ��������� ����� �1, �1, �2, �2 (����� �����, ������� � ��������� 1-8).
		else if (n == 7) {
			printf("7.	���� ���������� ���� ������ ����� ��������� ����� �1, �1, �2, �2 (����� �����, ������� � ��������� 1-8). ��������� ���������� ������������: ������ �� ���� ��� ����� ������� � ������ ���� �� ������\n");

			int x1 = 1 + rand() % 8, x2 = 1 + rand() % 8, y1 = 1 + rand() % 8, y2 = 1 + rand() % 8;

			printf("x1 = %d  x2 = %d y1 = %d y2 = %d\n", x1, x2, y1, y2);

			if (y2 == y1)
				printf("����� �� ���� ��� ����� ������� � ������ ���� �� ������\n");
			else printf("����� �� ���� ��� �� ����� ������� � ������ ���� �� ������\n");
		}
#pragma endregion
#pragma region 8.��������� �������� ����������� ��������� ��� ��������� ��������� ���������� ������� �, � � �
		else if (n == 8) {
			printf("8.	��������� �������� ����������� ��������� ��� ��������� ��������� ���������� ������� �, � � �: � = ������, � = ����, � = ����:\n");
			printf("a.	� ��� � � �� �;\n");
			printf("b.	�� � � �� �;\n");
			printf("c.	�� (� � �) ��� �;\n");
			printf("d.	� � �� � ��� �;\n");
			printf("e.	� ��� (�� (� � �)).\n\n");

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
#pragma region 9.��������� �������� ����������� ���������

		else if (n == 9) {

			printf("9.��������� �������� ����������� ���������:\n");
			printf("a.	(x >= 0) ���(y2 != 4) ��� x = 1, y = 2;\n");
			printf("b.	(x >= 0) �(y2 != 4) ��� x = 1, y = 2;\n");
			printf("c.	(x � � != 0) �(� > x) ��� x = 2, y = 1;\n");
			printf("d.	(x � � != 0) ���(� < x) ��� x = 2, y = 1;\n\n");

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
#pragma region 10.	��������� �������� ����������� ��������� ��� ���� ��������� ��������� ���������� ������� X � Y:
		else if (n == 10) {
			printf("10.	��������� �������� ����������� ��������� ��� ���� ��������� ��������� ���������� ������� X � Y :\n");
			printf("a. ��(X ��� Y)\n");
			printf("b. �� X � Y\n");
			printf("c. X � �� Y\n\n");

			int x = 0 + rand() % 1, y = 0 + rand() % 1;

			printf("��� ��������� x = %d � y = %d\n\n", x, y);

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