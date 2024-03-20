#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <iostream>
#include <ctime>

using namespace std;

class Birthday
{
public:
    Birthday();
    Birthday(string, string, string, string, int);
    string vorname;
    string nachname;
    string birthday;
    string birthdate;
    int alter;
    friend std::ostream& operator<<(std::ostream&, const Birthday&);

};



#endif // BIRTHDAY_H
