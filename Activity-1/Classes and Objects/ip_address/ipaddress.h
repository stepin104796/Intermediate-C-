#include <iostream>
#include <string.h>

using namespace std;
enum IPClass {a='A',b='B',c='C',d='D'};
//int i[4];
//char *token;
class IPAddress {
  private:
    std::string ipval;

  public:
    IPAddress();
    IPAddress(int,int,int,int);
    IPAddress(int);
    bool isLoopBack();
    void getIPClass();
    void display();
};


