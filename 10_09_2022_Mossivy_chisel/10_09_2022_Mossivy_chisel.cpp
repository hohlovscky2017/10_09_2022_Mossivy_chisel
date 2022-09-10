// 10_09_2022_Mossivy_chisel.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <cstdlib>
#include <iostream>
#include <ctime>

const int res_x = 15;
const int res_y = 12;

using namespace std;

int main()
{
	std::srand(std::time(0));

	int size_x, size_y, pos_x, pos_y;

	size_x = 1 + rand() % res_x;
	size_y = 1 + rand() % res_y;
	pos_x = rand() % (res_x - size_x);
	pos_y = rand() % (res_y - size_y);

	int mass_pix[res_x][res_y];

	for (int i = 0; i < res_x; i++)
		for (int j = 0; j < res_y; j++) mass_pix[i][j] = rand() % 10;

	for (int i = 0; i < res_x; i++) {
		for (int j = 0; j < res_y; j++) cout << mass_pix[i][j] << " ";
		cout << endl << endl;
	}

	for (int i = pos_x; i < pos_x + size_x; i++)
		for (int j = pos_y; j < pos_y + size_y; j++) mass_pix[i][j] = 1;

	cout << "///////////////////////////////////////////////////////////" << endl;

	for (int i = 0; i < res_x; i++) {
		for (int j = 0; j < res_y; j++) cout << mass_pix[i][j] << " ";
		cout << endl << endl;
	}

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
