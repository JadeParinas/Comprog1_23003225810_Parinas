#include <iostream>
using namespace std;

int main() 
{
 
 string VisitorName;
 string Birthday;
 int Month;
 int Day;
 int Year;
 int Leapyear = Year % 4;
 
cout << "Hello I am Parinas! Welcome to my first C++ Application\n";
cout << "Hey! What is your name? ";
cin >> VisitorName;
cout << "Good Day " << VisitorName << " Its nice to meet you ";
cout << "\nWhen is your birthday? ";
cout << "\nMonth: "; 
cin >> Month; 
cout <<"Day: ";
cin >> Day;
cout << "Year: ";
cin >> Year;
cout << Leapyear;
if (Leapyear = 0)
{
    cout << "Nice you're year is a leap year"
}
else{
    cout << "not a Leapyear"
}

    return 0;
}
