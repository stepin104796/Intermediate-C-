#include "book.h"

int Book::isbn()const{return m_isbn;}
std::string Book::title()const{return m_title;}
std::string Book::author()const{return m_author;}
int Book::year()const{return m_year;}
double Book::price()const{return m_price;}
int Book::pages()const{return m_pages;}
void Book::display() const
  {
    std::cout<<"isbn : "<<m_isbn<<"\t";
    std::cout<<"title : "<<m_title<<"\t";
    std::cout<<"author : "<<m_author<<"\t";
    std::cout<<"year : "<<m_year<<"\t";
    std::cout<<"price : "<<m_price<<"\t";
    std::cout<<"pages : "<<m_pages<<"\n";
    
  }
