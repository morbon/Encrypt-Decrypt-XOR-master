#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<clocale>
using namespace std;

int main()
{
	/*setlocale(LC_ALL, "rus");
	char msg[] = "������ ���!";
	unsigned char key = 177;
	cout << endl;*/

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "������� �����, ������� ����� �����������: ";
	char msg[] = "";
	cin >> msg;

	int N = strlen(msg);

	unsigned char key;
	cout << "������� ����: " << endl;
	cin >> key;
	cout << endl;

	//�������
	for (int i = 0; i < N; ++i)
		msg[i] ^= key;

	//���������� ������������ ���������
	cout << "���� ��������� � ������������ ����: " << endl;

	for (int i = 0; i < N; ++i) cout << msg[i];
	cout << endl;

	//��������������
	for (int i = 0; i < N; ++i)
		msg[i] ^= key;

	//� ����� ����������
	cout << "� ��� ���� ��������� � ������������� ����: " << endl;
	for (int i = 0; i < N; ++i) cout << msg[i];
	cout << endl;

	_getch();
	return 0;
}