#include <iostream>
#include <string> // библиотека, позволяющая работать со строками С++

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Строки языка С

	/*char cstr[]{'H','i','!','\0'};

	std::cout << cstr << std::endl;

	char cstr2[] = { "Hello world!" };
	std::cout << cstr2 << std::endl;*/


	// Строки языка С++

	//std::string mystr; // создание пустой строки ("")
	//std::cout << mystr << std::endl;
	//mystr = "Oranges and apples";
	//
	//std::cout << mystr << std::endl;
	//std::cout << mystr + "!!!" << std::endl;
	//mystr += ".\nWow!";
	//std::cout << mystr << std::endl;
	//std::cout << mystr[3] << mystr[4] << std::endl;


	// Ввод данных в строку

	/*std::cout << "Как тебя зовут?\n";
	std::cout << "Ввод -> ";
	std::string name;
	//std::cin >> name; // плохой вариант так как считывается одно слово
	std::getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";

	std::cout << "А сколько тебе лет?\n";
	std::cout << "Ввод -> ";
	int age;
	std::cin >> age;
	std::cout << age << "! Круто...\n";

	std::cin.ignore();

	std::cout << "Кем ты работаешь?\n";
	std::cout << "Ввод -> ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Я всегда мечтал быть " << job << "... \n\n";
	*/


	// Методы строк
	/*std::string str = "Hello world!";

	// length и size, возвращают текущую длину строки
	//std::cout << str.length() << std::endl; // 12
	//std::cout << str.size() << std::endl; // 12

	// insert, вставляющий подстроку в строку
	str.insert(3, "WWW"); // HelWWWlo world!
	std::cout << str << std::endl;

	// replace, заменяющий часть строки на новую подстроку
	//str.replace(3, 5, "###"); // Hel###rld!
	//std::cout << str << std::endl;

	// find, возвращающий позицию первого входждения подстроки в строку
	//std::cout << str.find('l') << std::endl; // 2
	//std::cout << str.find('l', 5) << std::endl; //9

	// rfind, возвращающий позицию последнего вхождения подстроки в строку
	std::cout << str.rfind('o') << std::endl;
	std::cout << str.rfind('o',5) << std::endl;

	// substr, возвращает подстроку с указанной позици либо до конца либо указанной длинны
	std::cout << str.substr(3) << std::endl; // lo world!
	std::cout << str.substr(3, 5) << std::endl; // lo wo
	*/

	// Преобразования числа в строку
	
	/*std::cout << "Введите число -> ";
	std::cin >> n;

	std::cin.ignore();

	std::string numstr = std::to_string(n); // 123 => "123"

	bool flag = true;
	for (int i = 0; i < numstr.length() / 2; i++)
		if (numstr[i] != numstr[numstr.length() - i - 1]){
			flag = false;
			break;
		}

	if (flag)
		std::cout << "Палиндром\n\n";
	else
		std::cout << "Не палиндром\n\n";

	*/


	// Преобразование строки в число

	/*std::cout << "Введите число -> ";
	std::string strnum;
	std::getline(std::cin, strnum);

	int num = std::stoi(strnum);

	std::cout << num << std::endl;*/


	// изменение регистра

	std::string newstr = "HellO!";
	for (int i = 0; i < newstr.length(); i++)
		 newstr[i] = std::toupper(newstr[i]);

		// newstr[i] = std::tolower(newstr[i]);

	std::cout << newstr << std::endl;




	return 0;
}