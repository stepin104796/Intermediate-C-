#ifndef __LIBRARY_H
#define __LIBRARY_H

#include "book.h"
#include<list>
#include<string>

class Library {
  std::list<Book> books;
  public:
  void addBook(int isbn, std::string title, std::string author, 
                            int year, double price, int pages);
  void removeBookByISBN(int isbn);
  void displayAll();
  Book* findBookByISBN(int isbn);
  bool isBookFound(int );
  double findAveragePrice();
  Book& findBookwithMaxPages();
  int countBooksInPriceRange(int ,int);
  int count() { return books.size(); }
  //sortByTitle, sortByAuthor
  //MinPriceReleased in an year
  double minPriceReleased(int);
};


#endif
