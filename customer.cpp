// Lawrence Scroggs CS202 Program 2 05/01/19

// This class will implement the constructor for the 
// abstract base class.  It will also house the destructor
// and set up any functions that will be needed for the 
// abstract base class if any.  

#include "customer.h"




// copy constructor
customer::customer(const customer & obj){

  cout << "copy invoked" << endl;

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

  next = NULL;

}
// destructor
customer::~customer(){

  delete [] name;
  delete [] address;
  delete [] d_type;
  delete [] contents;

}
