// Lawrence Scroggs CS202 Program 2 05/01/19

// This class will implement the constructor for the 
// abstract base class.  It will also house the destructor
// and set up any functions that will be needed for the 
// abstract base class if any.  

#include "customer.h"




// copy constructor
customer::customer(const customer & obj){

  name = new char[strlen(obj.name) + 1];
  strcpy(name, obj.name);

  address = new char[strlen(obj.address) + 1];
  strcpy(name, obj.address);

  d_type = new char[strlen(obj.d_type) + 1];
  strcpy(name, obj.d_type);
  
  contents = new char[strlen(obj.contents) + 1];
  strcpy(name, obj.contents);

  next = obj.next;

}
// regular constructor
customer::customer(){
  
  name = new char[100]();
  address = new char[200]();
  d_type = new char[100]();
  contents = new char[100]();

  next = NULL;

}
// destructor
customer::~customer(){

  cout << "virtual destructor called" << endl;
  delete [] name;
  delete [] address;
  delete [] d_type;
  delete [] contents;

}
