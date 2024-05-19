#include <iostream>
#include <fstream>
#include <regex>
#include <string>
#include <vector>
using namespace std;

class Human {
private:
	string name;
	string phone;
	string birthDate;
public:
    Human() {}
    Human(string nname, string bbirthday, string pphone)
        : name(nname), birthDate(bbirthday), phone(pphone) {}
    Human(const Human& other)
        : name(other.name), birthDate(other.birthDate), phone(other.phone) {}
    // Месяцы
    int Jan = 31;
    int Feb1 = 28;
    int Feb2 = 29;
    int Mar = 31;
    int Apr = 30;
    int May = 31;
    int Jun = 30;
    int Jul = 31;
    int Aug = 31;
    int Sep = 30;
    int Oct = 31;
    int Nov = 30;
    int Dec = 31;
    //Високосные года
    /*
    bool LeapYear(string month, string year)
    {
        if (month == "02") 
        {
            if (stoi(year) % 4 == 0) 
            {
                if (stoi(year) % 100 == 0) 
                {
                    if (stoi(year) % 400 == 0) 
                    {
                        return true;
                    }
                    else 
                    {
                        return false;
                    }
                }
                else 
                {
                    return false;
                }
            }
            else 
            {
                return false;
            }
        }
        else 
        {
            return false;
        }

    }
    */

    // Получение имени
    string getName() {
        return name;
    }
    // Получение телефона
    string getPhone() {
        return phone;
    }
    // Получение др
    string getBirthDate() {
        return birthDate;
    }
    // Получение года
    string getYear() {
        string Year;
        for (int i = 6; i < 10; i++)
        {
            Year += birthDate[i];
        }
        return Year;
    }
    //Объявление
    string testYear, testMonth, testDay;
    bool flag1 = 0;
    //read
    void read() {
        regex pattern("\\d\\d\\.\\d\\d\\.\\d\\d\\d\\d");
        cout << "C: Enter name: ";
        cin >> name;
        cout << "C: Enter birth date (dd.mm.yyyy): ";
        while (flag1 != 1)
        {
            flag1 = 0;
            cin >> birthDate;
            if ((birthDate.size() == 10) and (regex_match(birthDate, pattern)))
            {
                testYear = "";
                testMonth = "";
                testDay = "";
                for (int i = 6; i < 10; i++)
                {
                    testYear += birthDate[i];
                }
                for (int i = 3; i < 5; i++)
                {
                    testMonth += birthDate[i];
                }
                for (int i = 0; i < 2; i++)
                {
                    testDay += birthDate[i];
                }
                //Проверка на день, месяц, год
                if (((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and ((stoi(testYear) % 400 == 0) and (stoi(testYear) % 100 == 0) and (stoi(testYear) % 4 == 0)) and (0 < stoi(testMonth)) and (stoi(testDay) < 30)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and ((stoi(testYear) % 400 != 0) and (stoi(testYear) % 100 != 0) and (stoi(testYear) % 4 != 0)) and (0 < stoi(testMonth)) and (stoi(testDay) < 29)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)) or
                    ((stoi(testYear) < 2024) and (0 < stoi(testMonth)) and (stoi(testMonth) < 13) and (1800 < stoi(testYear)) and (regex_match(birthDate, pattern)) and (stoi(testMonth) == 1) and (0 < stoi(testMonth)) and (stoi(testDay) < 32)))
                {
                    flag1 = 1;
                }
                else
                {
                    cout << "C: Invalid input(1)\n";
                    cout << "C: Enter birth date (dd.mm.yyyy): ";
                }

            }
            else
            {
                cout << "C: Invalid input(2)\n";
                cout << "C: Enter birth date (dd.mm.yyyy): ";
            }
        }
        cout << "C: Enter phone number: ";
        cin >> phone;
    }
    //check
    bool check(string nameCondition, string birthDateCondition, string phoneCondition)
    {
        if (nameCondition != "*" and name != nameCondition) return false;
        if (birthDateCondition != "*" and birthDate != birthDateCondition) return false;
        if (phoneCondition != "*" and phone != phoneCondition) return false;
        return true;
    }
    //check_remove
    bool check_remove(string Condition)
    {
        if (Condition == "*" or name == Condition) return true;
        if (Condition == "*" or birthDate == Condition) return true;
        if (Condition == "*" or phone == Condition) return true;
        return false;
    }
    //writelist
    void writelist() 
    {
        cout << "C: Name: "<< name << "\t" << " Birth Date: " << birthDate << "\t" << " Phone: " << phone << "\n";
    }



};

class HumanList {
private:
    vector<Human> list;

public:
    //add
    void add(Human person)
    {
        list.push_back(person);
        cout << "C: Success\n";
    }
    //write
    void write(string nameCondition, string birthDateCondition, string phoneCondition)
    {
        for (auto& person : list)
        {
            if (person.check(nameCondition, birthDateCondition, phoneCondition)) person.writelist();
        }
    }
    //save
    void save(string filename)
    {
        ofstream file(filename, ios::app);
        if (file.is_open())
        {
            for (auto& human : list)
            {
                file << human.getName() << " " << human.getBirthDate() << " " << human.getPhone() << "\n";
            }
            file.close();
            cout << "C: Success\n";
        }
        else cerr << "C: Error\n";
    }
    //remove
    void remove(string Condition)
    {
        list.erase(remove_if(list.begin(), list.end(), [&](Human person)
            {
                return person.check_remove(Condition);
            }), list.end());
        cout << "C: Success\n";
    }
    //load
    void load(string filename) {
        ifstream file(filename);
        regex datePattern("\\d{2}\\.\\d{2}\\.\\d{4}");
        regex phonePattern("\\d{11}");
        if (file.is_open()) {
            string name, birthDate, phone;
            while (file >> name >> birthDate >> phone) {
                if ((birthDate.size() == 10 and regex_match(birthDate, datePattern) and regex_match(phone, phonePattern)))
                list.emplace_back(name, birthDate, phone);
            }
            file.close();
            cout << "C: Success\n";
        }
        else cerr << "C: Error: Unable to open file\n";  
    }
    //comp
    static bool compName(Human a, Human b)
    {
        return a.getName() < b.getName();
    }
    static bool compBirthDate(Human a, Human b)
    {
        return a.getYear() < b.getYear();
    }
    static bool compPhone(Human a, Human b)
    {
        return a.getPhone() < b.getPhone();
    }
    //sort
    void sortC(string Condition) {
        if (Condition == "name") {
            sort(list.begin(), list.end(), &HumanList::compName);
            cout << "C: Success\n";
        }
        else if (Condition == "birthDate") {
            sort(list.begin(), list.end(), &HumanList::compBirthDate);
            cout << "C: Success\n";
        }
        else if (Condition == "phone") {
            sort(list.begin(), list.end(), &HumanList::compPhone);
            cout << "C: Success\n";
        }
        else cerr << "C: Error: Unknown Condition\n";

    }
};