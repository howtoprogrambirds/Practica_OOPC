#include <iostream>
#include "book.hpp"

int main(){
	std::string text = "boek boek boek boek boek boek boek boek boek boek boek";
	std::string author = "autheur autheur autheur";
	std::string title = "titel titel titel titel";
	book gucci(text, author, title);
	
	gucci.print();
}
