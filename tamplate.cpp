// ������6������ ������ �++
#include < iostream>
#include < string>
using namespace std;


struct date {
	int day;
	int mounth;
	int year;
};

struct person {
	string name;
	date birthday;
	string position = "����������� ";// tom.position ������� �����������
} ;


void printperson(person &P) {
	cout << P.name << " " << P.birthday.day << "." << P.birthday.mounth << "." << P.birthday.year << endl;
}

person inputperson() {      // ���������� ��� �������� �� ��� ���������� 
	person newP;
	cout << "������� ���: ";
	getline(cin, newP.name);
	cout << "������� ����: ";
	cin >>  newP.birthday.day;
	cout << "������� �����: ";
	cin >> newP.birthday.mounth;
	cout << "������� ���: ";
	cin >> newP.birthday.year;
	cin.ignore();
	return newP;

}


void fillperson(person& P) {    // �� ���������� ��������
	cout << "������� ���: ";
	getline(cin, P.name);
	cout << "������� ����: ";
	cin >> P.birthday.day;
	cout << "������� �����: ";
	cin >> P.birthday.mounth;
	cout << "������� ���: ";
	cin >> P.birthday.year;
	cin.ignore();
}


int main() {
	setlocale(LC_ALL, "Russian");
		int n;
		/*struct date {// �������� ��������� � 4 ������
			int day;// ��������� ����
			int month;// ��������� �����
			int year;// ��������� ���
			string note;// ������ ������� ���� �������� ����
		} birthday, saleday = { 18, 4, 2022, "����������" };// 
		// ������ ������������ �������� ����� ������� 
		/*birthday.day = 1;
		birthday.month = 5;
		birthday.year = 1970;
		birthday.note = " ���� �������� ����!";
		birthday = { 1, 5, 1970, " ���� �������� ����!" };// ���������� ���������� ����� �������
		//saleday = birthday;// ������������ ����� ������� ������� �������
		// ����� �����
			cout << birthday.day << "." << birthday.month << "." << birthday.year << "-" << birthday.note << endl;
			cout << saleday.day << "." << saleday.month << "." << saleday.year << " - " << saleday.note << endl;
			date yasterday = { 17, 4, 2022, " ��������� ����" };//�������������� ������ �������� ������� ��������� ����� ������� � ����� ����� ���������
			cout << yasterday.day << "." << yasterday.month << "." << yasterday.year << " - " << yasterday.note << endl;*/

		person Tom = { "Tom Smith" };
		Tom.birthday = { 1, 2, 1998 };// ����� ��� ����������� �� ��� ������� ������� 
		Tom.position;
		//cout << Tom.name << " " << Tom.birthday.day << "." << Tom.birthday.mounth << "." << Tom.birthday.year << endl;//����� ��� �������� ��� ����
		person Bob = { "Bob", 15, 6, 1987};
		//cout << Bob.name << " " << Bob.birthday.day << "." << Bob.birthday.mounth << "." << Bob.birthday.year << endl;

		printperson(Tom);//����� ����� �������
		printperson(Bob);
		cout << endl ;

		person* pB = &Bob;//��������� �� ���� 
		cout <<" ��� " << pB->name << endl;		//������� ��� ����� ��������� 
		cout << " ��� �������� " << pB->birthday.year << endl;//����� ���� �������� 
		pB->name = "Bob Tomson";		//������ ��� ����� ���������
		cout << Bob.name << endl;
		pB = &Tom;						//�������������� ��������� �� ������ ������
		cout << pB->name << endl;
		

		/*cout << "---------------------\n\n";
		person my = inputperson();
		printperson(my);*/

		cout << "---------------------\n\n";
		person you;
		fillperson(you);
		printperson(you);

		struct point {
			int arr[5];
		};
		

	
	return 0;
}