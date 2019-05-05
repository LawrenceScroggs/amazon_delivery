// Lawrence Scroggs CS202 Program 2 05/01/19

// This will hold all the different delivery classes
// There will be four delivery classes.  A pick up class
// for when there is a pick up in area.  A signature required
// delivery.  A standard delivery and a Cash on Demand Delivery.



#include "delivery.h"



/*******************delivery functions********************************/

void delivery::set_next(customer * connection){


  next = connection;
  
}
customer * delivery::get_next(){

  return next;

}
char * delivery::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
char * delivery::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(name, a_address);

}
char * delivery::set_type(){

  
  char temp[9]  = {'D','e','l','i','v','e','r','y','\n'};
 
  d_type = new char[9];

  strcpy(d_type, temp);

}
char * delivery::set_contents(char * a_contents){

  contents = new char[strlen(a_contents) + 1];
  strcpy(name, a_contents);

}
// sets constructor 
delivery::delivery(){

  cout << "Name of the Person receiving: ";
  set_name(read());

  cout << "Address of receiver: ";
  set_address(read());

  set_type();

  cout << "Contents being delivered: ";
  set_contents(read());

}
delivery::~delivery(){



}


/*******************pick up functions*********************************/


/*******************cod functions************************************/



/********************signature req functions**************************/





