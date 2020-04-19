#include <iostream>
#include "Functions.h"
#include "rapidxml.hpp"
#include "rapidxml_print.hpp"

using std::cout;

int main()
{
	PrintLogo();

	//import XML

	char** board = CreateBoard(9, 9);
	FillBoard(9, 9, board);
	PrintBoard(9, 9, board);

	// iterate generations

	// delete
}