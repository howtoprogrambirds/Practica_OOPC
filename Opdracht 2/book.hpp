#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>

class book{
private:
	std::string text;
	std::string author;
	std::string title;
	
	void print_text();
	void print_author();
	void print_title();
	
public:
	book(const std::string & input_text, const std::string & input_author, const std::string & input_title):
	text(input_text),
	author(input_author),
	title(input_title)
	{}
	
	void print();
};

#endif