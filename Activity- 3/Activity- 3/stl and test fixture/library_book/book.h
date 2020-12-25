#ifndef __BOOK_H
#define __BOOK_H

#include<iostream>
#include<string>
class Book {
  int m_isbn;     //ideally to be std::string
  std::string m_title;
  std::string m_author;
  //std::string m_publisher;
  int m_year;       //publishing
  double m_price;
  int m_pages;
  public:
  Book():m_isbn(0),m_title("XXX"),m_author("YYY"),m_year(1990),m_price(120.0),m_pages(10){}
  Book(int isbn,std::string title,std::string author,int year,double price,int pages):m_isbn(isbn),m_title(title),m_author(author),m_year(year),m_price(price),m_pages(pages){}

  //TODO: default ctor
  //TODO: param ctor
  int isbn()const;
  std::string title()const;
  std::string author()const;
  int year()const;
  double price()const;
  int pages()const;
  void display() const;
  friend std::ostream& operator<<(std::ostream& rout, const Book& ref);
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), publisher(), year()
  //                       - price(), pages()
  //TODO:- display
  //TODO:- const suffix for immutable function

};
#endif
