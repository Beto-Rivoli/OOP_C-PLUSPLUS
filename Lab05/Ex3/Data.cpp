#include <string>
#include "Data.h"
using namespace std;

const int Data::days[13]
{
	0,31,28,31,30,31,30,31,31,30,31,30,31
};
Data::Data( int day, int month, int year) {
 setData( day, month, year);
}
// set month, day and year
void Data::setData( int dd, int mm, int yy) {
	 if (mm >= 1 && mm <= 12)
	 	month = mm;
	 else
	 	month = 1; // se nao for valido, fixa janeiro
	 if (yy >= 1900 && yy <= 2100)
	 	year = yy;
	 else
	 	year = 2021; // se nao for valido, fixa 2021
	 // test para ano bissexto
	 if ((month == 2 && anoBissexto(year) && dd >= 1 && dd <= 29) ||
	 	(dd >= 1 && dd <= days[month]))
	 	day = dd;
	 else
	 	day = 1; //caso seja inválido fixa o dia 1
}
// overloaded prefix increment operator
Data& Data::operator++() {
 	helpIncrement(); // increment Data
 	return *this; // reference return to create an lvalue
}
// overloaded postfix increment operator; note that the
// dummy integer parameter does not have a parameter name
Data Data::operator++(int) {
	 Data temp (*this); // hold current state of object
	 helpIncrement();
	 // return unincremented, saved, temporary object
	 return temp; // value return; not a reference return
}
// add specified number of days to Data
Data& Data::operator+=(unsigned int additionalDays) {
	for (unsigned int i = 0; i < additionalDays; ++i) 
	{
		helpIncrement();
	}
 return *this; // enables cascading
}

// Se o ano não terminar em 00 e for divisível por 4 dizemos que ele é bissexto.
// Os anos terminados em 00 serão bissextos se a divisão deles por 400 for exata, 
//isto é, o resto da divisão precisa ser igual a zero
bool Data::anoBissexto(int testYear) 
{
 return (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0));
}

// determine whether the day is the last day of the month
bool Data::endOfMonth(int testDay) const {
 if (month == 2 && anoBissexto(year)) 
 {
 	return testDay == 29; // last day of Feb. in leap year
 }
 else 
 {
 	return testDay == days[month];
 }
}
// function to help increment the Data
void Data::helpIncrement() 
{
 // day is not end of month
	 if (!endOfMonth(day)) 
	 {
		++day; // increment day
	 }
	 else 
	 {
		if (month < 12) 
		{ // day is end of month and month < 12
			++month; // increment month
			day = 1; // first day of new month
		}
		else 
		{ // last day of year
			++year; // increment year
			month = 1; // first month of new year
			day = 1; // first day of new month
		}
	 }
}

ostream& operator<<(ostream& output, const Data& d) {
	 static string monthName[13]{"", "Janeiro", "Fevereiro",
	 	"Março", "Abril", "Maio", "Junho", "Julho", "Agosto",
	 	"Setembro", "Outubro", "Novembro", "Dezembro"};
	output << d.day << " de " << monthName[d.month] << " de " << d.year;
 	return output; // enables cascading
}







