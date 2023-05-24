#include <iostream>
#include <ostream>
#include <cstdlib>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data data1, data2;

	double price = 0; // price per book, used to calculate total revenue

	// read the first transactions: ISBN, number of books sold, price per book
	std::cin >> data1.bookNo >> data1.units_sold >> price;

	// calculate total revenue from price and units_sold:
	data1.revenue = data1.units_sold * price;

	// repeat the process for the second transaction:
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo)
	{
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;

		// print: ISBN, total sold, total revenue and average price per book
		std::cout << "ISBN: " << data1.bookNo << "\nTotal sold: " << totalCnt << "\nTotal Revenue: " << totalRevenue << " ";

		if (totalCnt != 0)
		{
			std::cout << "\nAverage price per book: " << totalRevenue/totalCnt << std::endl;
		}
		else
		{
			std::cout << "(no sales)" << std::endl;
		}

		return 0; // indicate success
	}
	else // transactions weren't the same ISBN
	{
		std::cerr << "Data must refer to the same ISBN" << std::endl;

		return -1; // indicate failure
	}
	else
	{
		std::cerr << "Please enter a valid value" << std::endl;
	}
}