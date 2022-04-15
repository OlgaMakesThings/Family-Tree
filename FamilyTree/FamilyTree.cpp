// Copyright Panova Olga 2022

#include <iostream>
#include <vector>
#include "Person.h"

int main()
{
    /*Date test_date;
    Date test_date1(31, 01, 2001);
    std::string res;
    res = test_date1.ShowDate();
    std::cout << res << std::endl;
    test_date = test_date1;
    res = test_date.ShowDate();
    std::cout << res << std::endl;*/

    Person a;
    std::vector<std::string> name_in(10);
    std::string name;
    std::string name_out;
    std::cout << "Enter the name.\n-> ";
    for (int i = 0; i < 3; i++) {
        std::cin >> name_in[i];
    }
    name = name_in[0] + " " + name_in[1] + " " + name_in[2];
    a.SetName(name);
    name_out = a.GetName();
    std::cout << "Name: " << name_out << std::endl;
    


    Date birth;
    std::vector<int> numbers(3);
    std::cout << "Enter date of birth.\nEnter through a space, without dots.\n-> ";
    for (int i = 0; i < numbers.size(); i++) {
        std::cin >> numbers[i];
    }
    birth.SetDate(numbers[0], numbers[1], numbers[2]);
    int check_date = birth.CheckDate();
    while (check_date != 0) {
        std::cout << "Wrong date." << std::endl;
        std::cout << "Enter date of birth\n-> ";
        for (int i = 0; i < numbers.size(); i++) {
            std::cin >> numbers[i];
        }
        birth.SetDate(numbers[0], numbers[1], numbers[2]);
        check_date = birth.CheckDate();
    }
    std::string res1;
    res1 = birth.GetDate();
    std::cout << "Birthdate: " << res1 << std::endl;
    


    Date death;
    std::vector<int> numbersd(3);
    std::cout << "Enter date of death.\nEnter through a space, without dots."<< std::endl;
    std::cout << "If person is alive, enter this: '0 0 0'.\n-> ";
    for (int i = 0; i < numbersd.size(); i++) {
        std::cin >> numbersd[i];
    }
    death.SetDate(numbersd[0], numbersd[1], numbersd[2]);
    int check_date1 = death.CheckDate();
    if (check_date1 == 1) {
        std::cout << "Ok, person is alive." << std::endl;
    } else {
        while (check_date1 != 0) {
            std::cout << "Wrong date." << std::endl;
            std::cout << "Enter date of death.\n-> ";
            for (int i = 0; i < numbersd.size(); i++) {
                std::cin >> numbersd[i];
            }
            death.SetDate(numbersd[0], numbersd[1], numbersd[2]);
            check_date1 = death.CheckDate();
        }
        std::string res2;
        res2 = death.GetDate();
        std::cout << "Deathdate: " << res2 << std::endl;
    }
    


    a.SetBirthdate(birth);
    a.SetDeathdate(death);
    std::cout << a.GetInfo() << std::endl;
}
