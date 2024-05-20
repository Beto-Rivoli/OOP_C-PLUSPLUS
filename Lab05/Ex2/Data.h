#ifndef DATA_H
#define DATA_H
#inlcude <iostream>

class Data
{
	public:
		Data(int d = 1, int m = 1, int y = 1900); // default constructor
		void setData(int, int, int); // set day, month, year
		Data& operator++(); // prefix increment operator
		Data operator++(int); // postfix increment operator
		Data& operator+=(unsigned int); // adicionar dias, modify object
		static bool anoBissexto(int); // � ano bissexto?
		bool endOfMonth(int) const; // � o ultimo dia do mes?
	private:
		unsigned int month;
		unsigned int day;
		unsigned int year;
		static const int days[13]; // dias por mes
		void helpIncrement(); // fun��o de apoio para incrementar data
		};
};

#endif
