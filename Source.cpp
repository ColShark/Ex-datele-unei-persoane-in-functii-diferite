#include <iostream>
#include <string>

void Date(std::string nume);
void Date(int varsta);
void Date(double greutate);

int main()
{
	Date("Petre Marius");
	Date(29);
	Date(89.5);

	system("pause");
}

void Date(std::string nume)
{
	std::cout << "Nume: " << nume << std::endl;
}

void Date(int varsta)
{
	std::cout << "Varsta: " << varsta << std::endl;
}

void Date(double greutate)
{
	std::cout << "Greutate (Kg): " << greutate << std::endl;
}