#include<iostream>
#include"library.h"
#include"book.h"
#include"library.cpp"
#include"book.cxx"


int main()
{
    Library l1;
    l1.addBook(123,"title1","author1",1998,1234.0,200);
    l1.addBook(124,"title2","author2",1999,1235.0,300);
    l1.addBook(125,"title3","author3",1997,1236.0,400);
    l1.addBook(126,"title4","author4",1996,1246.0,500);
    l1.addBook(127,"title5","author5",1995,1256.0,600);
    l1.addBook(128,"title6","author6",1994,1266.0,700);
    l1.addBook(129,"title7","author7",1993,1276.0,800);
    std::cout<<l1.count()<<"\n";
    std::cout<<"------------------------------------------"<<"\n";
    l1.displayAll();
    l1.removeBookByISBN(124);
    std::cout<<"------------------------------------------"<<"\n";
    l1.displayAll();
    std::cout<<"------------------------------------------"<<"\n";
    std::cout<<l1.isBookFound(125)<<"\n";
    std::cout<<"------------------------------------------"<<"\n";
    std::cout<<l1.findAveragePrice()<<"\n";
    std::cout<<"------------------------------------------"<<"\n";
    std::cout<<l1.countBooksInPriceRange(1240,1270)<<"\n";
    std::cout<<"------------------------------------------"<<"\n";
    l1.findBookByISBN(126)->display();
    std::cout<<"------------------------------------------"<<"\n";
    l1.findBookwithMaxPages().display();
    std::cout<<"------------------------------------------"<<"\n";
    l1.displayAll();
    return 0;
}