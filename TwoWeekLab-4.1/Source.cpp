#include <iostream>
#include <string>

using namespace std;

struct ABITURIENT
{
	string NAME;	//�������, �������
	char GENDER;	//�����
	string SPEC;	//����� ������������;
	int EXAM[3];	//���������� �������� ������ � ����� ��������
};

void Input(ABITURIENT*& A, const int n)
{
	for (int i(0); i < n; i++)
	{
		cout << "Enter name: ";
		cin >> A[i].NAME;
		cout << "Enter gender (M or W): ";
		cin >> A[i].GENDER;
		cout << "Enter ocupation: ";
		cin >> A[i].SPEC;
		cout << "Enter score for exams: ";
		for (int j(0); j < 3; j++)
		{
			cout << " >  ";
			cin >> A[i].EXAM[j];
		}
	}
}

int main()
{
	const int N = 3;
	ABITURIENT ABIT[N];

	

	system("pause");
	return NULL;
}