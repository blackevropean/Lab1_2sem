#include<iostream>
#include<windows.h>
#include <string>


using namespace std;

struct Profile
{
	int number;
	char FIO[100];
	char gender[2];
	int group;
	int id;
	int exam1;
	int exam2;
	int exam3;
	int test1;
	int test2;
	int test3;
	int test4;
	int test5;
	char depart[20];
} Student;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Profile* StudentInfo = 0;
	int StudentAmount;
	cout << "������� ���-�� ��������� ";
	cin >> StudentAmount;
	cout << std::endl;
	int s;
	s = sizeof(Profile);
	cout << s;
	Profile* arr = new Profile[StudentAmount];
	for (int i = 0; i < StudentAmount; i++) {
		cout << "Id ��������: ";
		cin >> arr[i].id;
		cout << "���: ";
		cin.getline(arr[i].FIO, 100, '\n');
		cin.getline(arr[i].FIO, 100, '\n');
		cout << "��� ��������: ";
		cin.getline(arr[i].gender, 2, '\n');
		cout << "����� ������: ";
		cin >> arr[i].group;
		cout << "������ �� ������� � ���.������: ";
		cin >> arr[i].exam1;
		cin >> arr[i].exam2;
		cin >> arr[i].exam3;
		cin >> arr[i].test1;
		cin >> arr[i].test2;
		cin >> arr[i].test3;
		cin >> arr[i].test4;
		cin >> arr[i].test5;
		cout << "����� ��������: ";
		cin.getline(arr[i].depart, 20, '\n');
		cin.getline(arr[i].depart, 20, '\n');
		cout << endl;
	}
	cout << "����� ������ ��� ���� ��������� " << endl;
	cout << "�\t " << "Id\t " << "���\t " << "���\t" << "������\t" << "������ �� �������� � ���.������\t" << "����� ��������\t" << endl;
	for (int i = 0; i < StudentAmount; ++i)
	{
		cout << arr[i].id << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << " " << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
	}
	cout << "����������� ������ �� ������ ������ ��������? (1-��, 0-���) ";
	int yon;
	cin >> yon;
	if (yon == 1) {
		int N;
		cout << "������� ����� ������ ���������, ������� ������ ����������� " << endl;
		cin >> N;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].group == N) {
				cout << arr[i].id << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << " " << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
		}
	}
	else
	{
	}
	cout << "����������� ���������� ��������� �������� ��� �������� ����? (1-��, 0-���) ";
	cin >> yon;
	if (yon == 1) {
		int c1 = 0, c2 = 0;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (int(arr[i].gender[0]) == -52 || arr[i].gender == "�")
			{
				c1++;
			}
			if (int(arr[i].gender[0]) == -58 || arr[i].gender == "�")
			{
				c2++;
			}
		}
		cout << "��������� �������� ����: " << c1 << "\t��������� �������� ����: " << c2 << endl;
	}
	else {
	}
	cout << "����������� ������ �� id ��������? (1-��, 0-���) ";
	cin >> yon;
	if (yon == 1) {
		int N;
		cout << "������� id ��������, �������� ������ ����������� " << endl;
		cin >> N;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].id == N) {
				cout << arr[i].id << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << " " << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
			else {
			}
		}
	}
	else {
	}
	cout << "�������� ������ ��������? (1-��, 0-���) ";
	cin >> yon;
	if (yon == 1) {
		int k;
		cout << "������� id �������� �������� ������ �������� ";
		cin >> k;
		for (int i = 0; i < StudentAmount; i++) {
			if (arr[i].id == k) {
				cout << "Id ��������: ";
				cin >> arr[i].id;
				cout << "���: ";
				cin.getline(arr[i].FIO, 100, '\n');
				cin.getline(arr[i].FIO, 100, '\n');
				cout << "��� ��������: ";
				cin.getline(arr[i].gender, 2, '\n');
				cout << "����� ������: ";
				cin >> arr[i].group;
				cout << "������ �� ������� � ���.������: ";
				cin >> arr[i].exam1;
				cin >> arr[i].exam2;
				cin >> arr[i].exam3;
				cin >> arr[i].test1;
				cin >> arr[i].test2;
				cin >> arr[i].test3;
				cin >> arr[i].test4;
				cin >> arr[i].test5;
				cout << "����� ��������: ";
				cin.getline(arr[i].depart, 20, '\n');
				cin.getline(arr[i].depart, 20, '\n');
				cout << endl;
			}
		}
	}
	cout << "������� ������ � ���������, ������� �� �������� ���������, ������ ������ �� ������� � ��������, ������ ������ �� ��������? (1-��, 0-���) ";
	cin >> yon;
	if (yon == 1) {
		cout << "�� �������� ���������" << endl << endl;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].exam1 < 4 || arr[i].exam2 < 4 || arr[i].exam3 < 4 || arr[i].test1 < 4 || arr[i].test2 < 4 || arr[i].test3 < 4 || arr[i].test4 < 4 || arr[i].test5 < 4)
			{
				{
					cout << i + 1 << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
				}
			}
		}
		cout << "������ �� ������ � �������" << endl << endl;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].exam1 > 3 && arr[i].exam2 > 3 && arr[i].exam3 > 3 && arr[i].test1 > 3 && arr[i].test2 > 3 && arr[i].test3 > 3 && arr[i].test4 > 3 && arr[i].test5 > 3)
			{
				cout << i + 1 << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
		}
		cout << "�������� ���������" << endl << endl;
		for (int i = 0; i < StudentAmount; i++)
		{
			if (arr[i].exam1 == 5 && arr[i].exam2 == 5 && arr[i].exam3 == 5 && arr[i].test1 == 5 && arr[i].test2 == 5 && arr[i].test3 == 5 && arr[i].test4 == 5 && arr[i].test5 == 5)
			{
				cout << i + 1 << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
			}
		}
	}
	cout << "������� ��� ���������? (1-��, 0-���) ";
	cin >> yon;
	if (yon == 1) {
		for (int i = 0; i < StudentAmount; i++)
		{
			for (int j = 1; j < (StudentAmount - i); j++)
			{
				if ((arr[j - 1].exam1 + arr[j - 1].exam2 + arr[j - 1].exam3 + arr[j - 1].test1 + arr[j - 1].test2 + arr[j - 1].test3 + arr[j - 1].test4 + arr[j - 1].test5) / double(8) < (arr[j].exam1 + arr[j].exam2 + arr[j].exam3 + arr[j].test1 + arr[j].test2 + arr[j].test3 + arr[j].test4 + arr[j].test5) / double(8))
				{
					swap(arr[j - 1], arr[j]);
				}
			}
		}
		cout << "�\t" << "���\t" << '\t' << '\t' << '\t' << "���\t" << "������\t" << "�����\t" << "1 ���\t" << "2 ���\t" << "3 ���\t" << "1 ���.\t" << "2 ���.\t" << "3 ���.\t" << "4 ���.\t" << "5 ���.\t" << endl;
		for (int i = 0; i < StudentAmount; i++)
		{
			cout << arr[i].id << '\t' << arr[i].FIO << '\t' << arr[i].gender << '\t' << arr[i].group << '\t' << arr[i].exam1 << arr[i].exam2 << arr[i].exam3 << " " << arr[i].test1 << arr[i].test2 << arr[i].test3 << arr[i].test4 << arr[i].test5 << '\t' << arr[i].depart << endl;
		}
	}
	delete[] arr;
	return 0;
}