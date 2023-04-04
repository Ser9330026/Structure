// Structure.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct dateData {
        int day = 1;
        int month = 1;
        int year = 1970;    
    };

    struct personData {
        std::string name = "noname";
        dateData birthday;//Объект структуры в качестве поля для другой структуры
        std::string job = "empty";
        int salary = 0;
    };

void show_person(const personData& PD) {
    std::cout << PD.name << std::endl;
    std::cout << PD.birthday.day << '.' << PD.birthday.month << "." << PD.birthday.year << std::endl;
    std::cout << PD.job << std::endl;
    std::cout << PD.salary << std::endl;
}

personData input_person() {
    personData tmp;
    std::cout << "Enter name ->";
    std::cin.ignore();
    std::getline(std::cin, tmp.name);
    std::cout << "Enter birthday day -> ";
    std::cin >> tmp.birthday.day;
    std::cout << "Enter birthday month-> ";
    std::cin >> tmp.birthday.month;
    std::cout << "Enter birthday year-> ";
    std::cin >> tmp.birthday.year;
    std::cin.ignore();
    std::getline(std::cin, tmp.job);
    std::cout << "Enter salary ->";
    std::cin >> tmp.salary;

    return tmp;
}

//Задача 1
struct coinKeeper {
    std::string name = "empty";
    int age = 0;
    int coins_number = 0;
    int* coins = nullptr;
};

void show_coinKeeper(const coinKeeper& CK) {
    std::cout << CK.name << std::endl;
    std::cout << CK.age << std::endl;
    std::cout << "Монеты: ";
    for (int i = 0; i < CK.coins_number; i++)
        std::cout << CK.coins[i] << '\t';
    std::cout << "\b\b \n";
}

inline int year_of_birth(const coinKeeper &CK, int year) {
    return (year - CK.age);
}

int cash(const coinKeeper& CK) {
    int sum = 0;
    for (int i = 0; i < CK.coins_number; i++)
        sum += CK.coins[i];

    return sum;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int n;

    //Структура person
   /* struct person {//Описание объекта с помощью переменных (структура), в данном случае человек
        std::string name;//Поле структуры, явл. строковой переменной
        int age;//Поле структуры, являющейся цельночисленной переменной
        std::string gender;
        std::string job;
        int salary;
    } p1, p2{ "Elisa", 18, "female", "actress", 50000};//создание объектов структуры, один из которых мгновенно инициализирован

    p1.name = "Tom";
    p1.age = 26;
    p1.gender = "male";
    p1.job = "programer";
    p1.salary = 75000

        //Обращение к полям объекта структуры

    std::cout << p1.name << '\n';
    std::cout << p1.age << '\n';
    std::cout << p1.gender << '\n';
    std::cout << p1.job << '\n';
    std::cout << p1.salary << '\n';

    std::cout << "----------------------\n";

    std::cout << p2.name << '\n';
    std::cout << p2.age << '\n';
    std::cout << p2.gender << '\n';
    std::cout << p2.job << '\n';
    std::cout << p2.salary << '\n';

    std::cout << "----------------------\n";

    person p3{//альтернативный вариант создания объекта
        "Alex",
        46,
        "male",
        "director",
        120000
    };
    std::cout << p3.name << '\n';
    std::cout << p3.age << '\n';
    std::cout << p3.gender << '\n';
    std::cout << p3.job << '\n';
    std::cout << p3.salary << '\n';


    person p4 = p3;//прямое присваивание полям объекта р4 значений объекта р3

    std::cout << "----------------------\n";

    std::cout << p4.name << '\n';
    std::cout << p4.age << '\n';
    std::cout << p4.gender << '\n';
    std::cout << p4.job << '\n';
    std::cout << p4.salary << '\n';*/

    //Структура date
    /*struct date {
        unsigned int day = 1;
        unsigned int month = 1;
        unsigned int year = 1970;
        std::string note = "empty";//Значение по умолчанию
    };
    date bd{ 1, 5, 2010 }; //"Bob's birthday"
    std::cout << bd.day << '.' << bd.month << '.' << bd.year << " - " << bd.note << std::endl;
    //на экране: 1.5.2010 - empty*/

    /*struct dateData {
        int day = 1;
        int month = 1;
        int year = 1970;
    };

    struct personData {
        std::string name = "noname";
        dateData birthday;//Объект структуры в качестве поля для другой структуры
        std::string job = "empty";
        int salary = 0;
    };*/

    //Две структуры

    /*personData pd{
        "Mike",
        {29, 7, 1998},
        "teacher",
        80000
    };

    show_person(pd);

    /*std::cout << pd.name << std::endl;
    std::cout << pd.birthday.day <<'.'<< pd.birthday.month<<"."<< pd.birthday.year << std::endl;
    std::cout << pd.job << std::endl;
    std::cout << pd.salary << std::endl;

    personData* pointer = &pd;
    std::cout << pointer->name << std::endl;//->
    std::cout << pointer->birthday.day << std::endl;

    personData pd2 = input_person();
    show_person(pd2);*/

//Задача 1. Объект с монетами
std::cout << "Задача 1\n";
coinKeeper keeper{
    "Peter",
    10,
    7,
    new int [7] { 1, 2, 3, 4, 5, 6, 7}
};

show_coinKeeper(keeper);

std::cout << "Год рождения: " << year_of_birth(keeper, 2023)<<std::endl;
std::cout << "Общие сбережения: " << cash(keeper)<<std::endl;


delete[] keeper.coins;

}

