#include <iostream>
#include <string>

using namespace std;

// zodiac sign month
string getZodiacSign(int month, int day) {
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) return "Aries";
    if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) return "Taurus";
    if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) return "Gemini";
    if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) return "Cancer";
    if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) return "Leo";
    if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) return "Virgo";
    if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) return "Libra";
    if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) return "Scorpio";
    if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) return "Sagittarius";
    if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) return "Capricorn";
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) return "Aquarius";
    if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) return "Pisces";
    return "Unknown";
}

// Leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Chinese anime zodiac sign
string getChineseZodiac(int year) {
    const string signs[] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", 
                            "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat"};
    return signs[year % 12];
}

int main() {
    string name;
    string permission;
    int month, day, year;

    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "! I'd like to learn more about you. May I collect your birthday details? [yes/no]: ";
    cin >> permission;

    if (permission == "yes") {
        cout << "Enter your birth month (1-12): ";
        cin >> month;
        cout << "Enter your birth day (e.g., 1-31): ";
        cin >> day;
        cout << "Enter your birth year: ";
        cin >> year;

        int choice;
        do {
            cout << "\nWhat would you like to do? Please select an option:\n";
            cout << "[1] Find out your zodiac sign\n";
            cout << "[2] Check if your birth year is a leap year\n";
            cout << "[3] Discover your Chinese zodiac sign\n";
            cout << "[4] Update your birthday information\n";
            cout << "[5] Exit the program\n";
            cout << "- ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Your zodiac sign is " << getZodiacSign(month, day) << ".\n";
                    break;
                case 2:
                    if (isLeapYear(year)) {
                        cout << "Your birth year is a leap year.\n";
                    } else {
                        cout << "Your birth year is not a leap year.\n";
                    }
                    break;
                case 3:
                    cout << "Your Chinese zodiac sign is " << getChineseZodiac(year) << ".\n";
                    break;
                case 4:
                    cout << "Update your birthday information:\n";
                    cout << "Enter your birth month (1-12): ";
                    cin >> month;
                    cout << "Enter your birth day (e.g., 1-31): ";
                    cin >> day;
                    cout << "Enter your birth year: ";
                    cin >> year;
                    break;
                case 5:
                    cout << "Exiting the program. Goodbye!\n";
                    break;
                default:
                    cout << "Invalid option. Please try again.\n";
            }
        } while (choice != 5);
    } else {
        cout << "Okay, maybe next time. Goodbye!\n";
    }

    return 0;
}
... (2 lines left)