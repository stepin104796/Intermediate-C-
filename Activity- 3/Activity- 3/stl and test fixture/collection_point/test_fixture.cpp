#include "collection.h"
#include "point.h"
#include <gtest/gtest.h>
namespace {

    class MainTest : public ::testing::Test {
  
  protected:
    void SetUp() { //override {
      ptr=new Point(123,200);

    }
    void TearDown() {"title1","author1",1998,1234.0,
    }
    Point *ptr;
};

TEST_F(MainTest,DefaultConstructor) {
    Point a1(10,20);
    EXPECT_EQ(10,a1.getx());
    
}