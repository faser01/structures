// ѕерсон6альный шаблон —++
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
	string position = "программист ";// tom.position выводит программист
} ;


void printperson(person &P) {
	cout << P.name << " " << P.birthday.day << "." << P.birthday.mounth << "." << P.birthday.year << endl;
}

person inputperson() {      // возвращает все значени€ но они удал€ютьс€ 
	person newP;
	cout << "¬ведите им€: ";
	getline(cin, newP.name);
	cout << "¬ведите день: ";
	cin >>  newP.birthday.day;
	cout << "¬ведите мес€ц: ";
	cin >> newP.birthday.mounth;
	cout << "¬ведите год: ";
	cin >> newP.birthday.year;
	cin.ignore();
	return newP;

}


void fillperson(person& P) {    // не возвращает значени€
	cout << "¬ведите им€: ";
	getline(cin, P.name);
	cout << "¬ведите день: ";
	cin >> P.birthday.day;
	cout << "¬ведите мес€ц: ";
	cin >> P.birthday.mounth;
	cout << "¬ведите год: ";
	cin >> P.birthday.year;
	cin.ignore();
}


int main() {
	setlocale(LC_ALL, "Russian");
		int n;
		/*struct date {// описание структуры с 4 пол€ми
			int day;// обь€вл€ем день
			int month;// обь€вл€ем мес€ц
			int year;// обь€вл€ем год
			string note;// запись событи€ ƒень рождени€ мен€
		} birthday, saleday = { 18, 4, 2022, "–аспродажа" };// 
		// пр€мое присваивание значений пол€м обьекта 
		/*birthday.day = 1;
		birthday.month = 5;
		birthday.year = 1970;
		birthday.note = " день рождени€ мен€!";
		birthday = { 1, 5, 1970, " день рождени€ мен€!" };// мгновенное заполнение полей обьекта
		//saleday = birthday;// присваивание пол€м обьекта другого обьекта
		// вывод полей
			cout << birthday.day << "." << birthday.month << "." << birthday.year << "-" << birthday.note << endl;
			cout << saleday.day << "." << saleday.month << "." << saleday.year << " - " << saleday.note << endl;
			date yasterday = { 17, 4, 2022, " ¬черашн€€ дата" };//альтернативный способ создани€ обьекта структуры можно создать в любом месте программы
			cout << yasterday.day << "." << yasterday.month << "." << yasterday.year << " - " << yasterday.note << endl;*/

		person Tom = { "Tom Smith" };
		Tom.birthday = { 1, 2, 1998 };// можно все перечислить но так гораздо улобнее 
		Tom.position;
		//cout << Tom.name << " " << Tom.birthday.day << "." << Tom.birthday.mounth << "." << Tom.birthday.year << endl;//вывод дн€ рождени€ дл€ тома
		person Bob = { "Bob", 15, 6, 1987};
		//cout << Bob.name << " " << Bob.birthday.day << "." << Bob.birthday.mounth << "." << Bob.birthday.year << endl;

		printperson(Tom);//вывод через функцию
		printperson(Bob);
		cout << endl ;

		person* pB = &Bob;//указатель на боба 
		cout <<" »м€ " << pB->name << endl;		//¬ыводим им€ через указатель 
		cout << " год рождени€ " << pB->birthday.year << endl;//вывод года рождени€ 
		pB->name = "Bob Tomson";		//мен€ем им€ через указатель
		cout << Bob.name << endl;
		pB = &Tom;						//ѕеренаправл€ем указатель на другой обьект
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