// Lawrence Scroggs CS202 Program 2 05/01/19

// This file will hold the abstract base class
// This will hold all the information on the customer
// and will have virtual functions that all the classes will 
// use within the derived classes and pointers to 
// create the circular linked list


#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;


// abstract base class
class customer{

  public:

//    char * read();
    virtual char * set_name(char * a_name) = 0;
    virtual char * set_address(char * address) = 0;
    virtual char * set_type() = 0;
    virtual char * set_contents(char * a_contents) = 0;

    virtual void print_info() = 0; 
    virtual void set_next(customer *& connection) = 0;

    virtual customer *& get_next() = 0;

    virtual ~customer();

  protected:

    customer(const customer & obj);
    customer();

    char * name;
    char * address;
    char * d_type; // delivery type
    char * contents;

    customer * next;
};
