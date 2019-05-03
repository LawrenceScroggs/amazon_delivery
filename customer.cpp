// Lawrence Scroggs CS202 Program 2 05/01/19

// This class will implement the constructor for the 
// abstract base class.  It will also house the destructor
// and set up any functions that will be needed for the 
// abstract base class if any.  

#include "customer.h"



customer::customer(){

  name = new char[100]();
  address = new char[200]();
  d_type = new char[100]();
  contents = new char[100]();

  next = NULL;
  rear = NULL;

}
customer::~customer(){



}
