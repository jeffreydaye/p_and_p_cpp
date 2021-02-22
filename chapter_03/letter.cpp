/**
 * Chapter 3 Drill - Generated Letter
 * @file letter.cpp
 * @author Jeffrey D. Daye
 * @version 1.0
 * @brief An automated letter printed to the terminal
*/

#include "../std_lib_facilities.h"

int main()
{
    string sender_name = "Jack";
    string recipient_name = "John";
    string friend_name = "Jane";
    int recipient_age = 0;
    char friend_sex = '0';

    cout << "********** AUTO LETTER MAKER **********\n";

    cout << "\nPlease enter your name: ";
    cin >> sender_name;
    cout << "\nPlease enter the name of the person you are writing to: ";
    cin >> recipient_name;
    cout << "\nPlease enter the age of the person you are writing to: ";
    cin >> recipient_age;
    cout << "\nPlease enter the name of a mutual friend: ";
    cin >> friend_name;
    cout << "\nPlease enter the sex of a mutual friend: ";
    cin >> friend_sex;

    cout << "Dear " << recipient_name << ",\n";
    cout << "\tHow are you? I am fine. I miss you. How has life been? Time is going by so fast! ";
    cout << "Have you seen " << friend_name << " lately? " ;
    cout << "If you see " << friend_name << " could you ask ";
    if (friend_sex == 'm'){
        cout << "him ";
    }
    else if (friend_sex = 'f'){
        cout << "her ";
    }
    cout << "to call me? ";
    cout << "I hear you just had a birthday and you are " << recipient_age << " years old! ";
    if (recipient_age < 110){
        if (recipient_age <= 70){
            if (recipient_age < 12){
                if (recipient_age == 0){
                    simple_error("you're kidding!\n");
                }
                cout << "Next year you will be " << recipient_age + 1 << "!\n";
            }
            else if (recipient_age == 17){
                cout << "Next year you will be able to vote!\n";
            }
        }
        cout << "I hope you are enjoying retirement!\n";
    }
    else{
        simple_error("you're kidding!\n");
    }
    cout << "Yours sincerely,\n";
    cout << "\t" << sender_name << "\n";

    return 0;
}