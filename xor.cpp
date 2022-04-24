#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<clocale>
using namespace std;

int main()
{
	/*setlocale(LC_ALL, "rus");
	char msg[] = "Привет Мир!";
	unsigned char key = 177;
	cout << endl;*/

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "Введите текст, каторый нужно зашифровать: ";
	char msg[] = "";
	cin >> msg;

	int N = strlen(msg);

	unsigned char key;
	cout << "Введите ключ: " << endl;
	cin >> key;
	cout << endl;

	//шифруем
	for (int i = 0; i < N; ++i)
		msg[i] ^= key;

	//отображаем зашифрованое сообщение
	cout << "Ваше сообщение в зашифрованом виде: " << endl;

	for (int i = 0; i < N; ++i) cout << msg[i];
	cout << endl;

	//расшифровываем
	for (int i = 0; i < N; ++i)
		msg[i] ^= key;

	//и снова отображаем
	cout << "А вот Ваше сообщение в расшифрованом виде: " << endl;
	for (int i = 0; i < N; ++i) cout << msg[i];
	cout << endl;

	_getch();
	return 0;
}