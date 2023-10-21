#include <iostream>
#include <ostream>
#include "Sales_item.h"

int main()
{

	Sales_item total{};

	// Ask user for list of books that have sold
	std::cout << "Please enter the list of books that have sold: " << std::endl;

	if (std::cin >> total)
	{
		Sales_item currentBook{};

		while (std::cin >> currentBook) // User enters another book
		{
			if (total.isbn() == currentBook.isbn()) // If this book has the same isbn as the previous book, add one to count
			{
				total += currentBook;
			}	
			else // Otherwise, print the count for the previous book
			{
				std::cout << total << std::endl;

				total = currentBook;
			}
		}

		std::cout << total << std::endl;
	}
	else
	{
		std::cerr << "Error! No data was entered" << std::endl;
		return -1;
	}

	return 0;
}