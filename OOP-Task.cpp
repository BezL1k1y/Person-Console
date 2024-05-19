#include <iostream>
#include <string>
#include "Person1.h"
using namespace std;
int main()
{
    HumanList people;
    string command;
    cout << "C: Type 'help' for list of commands.\n";
    while (command != "exit") {
        cin >> command;
        //help
        if (command == "help") {
            cout << "C: Available commands:\n"
                "- help\n"
                "- clear\n"
                "- load\n"
                "- save\n"
                "- add\n"
                "- sort\n"
                "- find\n"
                "- delete\n"
                "- exit\n";
        }
        //exit
        else if(command == "exit")
        {
            break;
        }
        //add
        else if (command == "add")
        {
            Human person;
            person.read();
            people.add(person);
        }
        //clear
        else if (command == "clear")
        {
            people = HumanList();
            cout << "C: Success\n";
        }
        //find
        else if (command == "find")
        {
            cout << "Enter three condition(name / birthDate / phone / *): ";
            string nameCondition, birthDateCondition, phoneCondition;
            cin >> nameCondition >> birthDateCondition >> phoneCondition;
            people.write(nameCondition, birthDateCondition, phoneCondition);
            cout << "C: Success\n";
        }
        //load
        else if (command == "load") {
            string filename;
            cout << "C: Enter file name: ";
            cin >> filename;
            people.load(filename);
        }
        //save
        else if (command == "save") {
            string filename;
            cout << "C: Enter file name: ";
            cin >> filename;
            people.save(filename);
        }
        //sort
        else if (command == "sort") {
            string Condition;
            cout << "Enter one condition(name / birthDate / phone): ";
            cin >> Condition;
            people.sortC(Condition);
        }
        //delete
        else if (command == "delete") 
        {
            string Condition;
            cout << "C: Enter one condition(name / birthdate / phone / *): ";
            cin >> Condition;
            people.remove(Condition);
        }
        //Error
        else 
        {
            cout << "C: Unknown command. Type 'help' for list of commands.\n";
        }

    }
}