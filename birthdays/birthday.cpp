#include "birthday.h"

Birthday::Birthday()
{

}

Birthday::Birthday(string vorname, string nachname, string birthday, string birthdate, int alter) :
    vorname{vorname}, nachname{nachname}, birthday{birthday}, birthdate{birthdate}, alter{alter}
{

}

std::ostream& operator<<(std::ostream& o, const Birthday& b)
{
    o << "Geburtstag von: " <<  b.vorname << " " << b.nachname << " " << b.birthday << " " << b.birthdate << " " << b.alter;
    return o;
}




