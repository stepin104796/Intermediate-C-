#include "library.h"
#include "book.h"
#include <gtest/gtest.h>
namespace {
    /*

    class MainTest : public ::testing::Test {
  
  protected:
    void SetUp() { //override {
      ptr=new Book(123,"title1","author1",1998,1234.0,200);

    }
    void TearDown() {
      delete ptr;
    }
    Book *ptr;
};

TEST_F(MainTest,DefaultConstructor) {
    Book a1;
    EXPECT_EQ(10,a1.pages());
    
}*/

 
TEST(Library, Cosnstructor1) {
    Library l1;
    l1.addBook(123,"title1","author1",1998,1234.0,200);
    l1.addBook(124,"title2","author2",1999,1235.0,300);
    l1.addBook(125,"title3","author3",1997,1246.0,400);
    EXPECT_EQ(3, l1.count());
 
}
TEST(Library, Cosnstructor2) {
    Library l1;
    l1.addBook(123,"title1","author1",1998,1234.0,200);
    l1.addBook(124,"title2","author2",1999,1235.0,300);
    l1.addBook(125,"title3","author3",1997,1246.0,400);
    EXPECT_EQ(1, l1.isBookFound(123));
}
TEST(Library, Cosnstructor3) {
    Library l1;
    l1.addBook(123,"title1","author1",1998,1234.0,200);
    l1.addBook(124,"title2","author2",1999,1235.0,300);
    l1.addBook(125,"title3","author3",1997,1246.0,400);
    EXPECT_EQ(2, l1.countBooksInPriceRange(1230,1240));
}
TEST(Library, Cosnstructor4) {
    Library l1;
    l1.addBook(123,"title1","author1",1998,1234.0,200);
    l1.addBook(124,"title2","author2",1999,1235.0,300);
    l1.addBook(125,"title3","author3",1997,1246.0,400);
    EXPECT_EQ(1238, (int)l1.findAveragePrice());
}


}