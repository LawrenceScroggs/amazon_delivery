// Lawrence Scroggs CS202 Program 2 05/01/19

// This will hold all the different delivery classes
// There will be four delivery classes.  A pick up class
// for when there is a pick up in area.  A signature required
// delivery.  A standard delivery and a Cash on Demand Delivery.



#include "delivery.h"



/*******************delivery functions********************************/

// returns name for comparison
char * delivery::get_name(){

  return name;

}
void delivery::print_info(){

  cout << "ROUTE TYPE:::: " << d_type << endl;
  cout << "************************************" << endl;
  cout << "Customer Name: " << name << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Contents: " << contents << endl << endl;
  cout << "_____________________________________________\n\n\n";
 
}
// sets next to type delivery
void delivery::set_next(customer *& connection){


  next = connection;

  return;
 
}
// moves next
customer *& delivery::get_next(){

  return next;

}
// sets name of delivery
char * delivery::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
// sets address for delivery
char * delivery::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(address, a_address);

}
// Builds type for class to display
char * delivery::set_type(){

  char temp[9]  = {'D','e','l','i','v','e','r','y','\n'};

  d_type = new char[strlen(temp)+1];
  strcpy(d_type, temp);

}
// sets contents of delivery
char * delivery::set_contents(char * a_contents){

  contents = new char[strlen(a_contents) + 1];
  strcpy(contents, a_contents);

}
// sets constructor 
delivery::delivery(){

  char * temp = new char[500];
  cout << "Name of the Person receiving: ";
  cin.get(temp,500);
  cin.ignore(500,'\n');
  set_name(temp);

  char * temp2 = new char[500];
  cout << "Address of receiver: ";
  cin.get(temp2,500);
  cin.ignore(500,'\n');
  set_address(temp2);

  set_type();

  char * temp3 = new char[500];
  cout << "Contents being delivered: ";
  cin.get(temp3,500);
  cin.ignore(500,'\n');
  set_contents(temp3);

  cout << endl;

  delete [] temp;
  delete [] temp2;
  delete [] temp3;
}
// destructor
delivery::~delivery(){

}


/*******************pick up functions*********************************/


// returns name for comparison
char * pick_up::get_name(){

  return name;

}
void pick_up::print_info(){

  cout << "ROUTE TYPE:::: " << d_type << endl;
  cout << "************************************" << endl;
  cout << "Customer Name: " << name << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Contents: " << contents << endl << endl;
  cout << "_____________________________________________\n\n\n";
 
}
// sets the next pointer data
void pick_up::set_next(customer *& connection){


  next = connection;
  
}
// moves to next
customer *& pick_up::get_next(){

  return next;

}
// sets name of person needing pick up
char * pick_up::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
// sets address of pickup
char * pick_up::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(address, a_address);

}
// sets contents being picked up
char * pick_up::set_contents(char * a_contents){

  contents = new char[strlen(a_contents) + 1];
  strcpy(contents, a_contents);

}
// builds array for display of type
char * pick_up::set_type(){

  char temp[8]  = {'P','i','c','k','-','U','p','\n'};
 
  d_type = new char[strlen(temp)+1];
  strcpy(d_type, temp);

}
// constructor
pick_up::pick_up(){

  char * temp = new char[500];
  cout << "Name of the Person needing Pick-Up: ";
  cin.get(temp,500);
  cin.ignore(500,'\n');
  set_name(temp);

  char * temp2 = new char[500];
  cout << "Address of receiver: ";
  cin.get(temp2,500);
  cin.ignore(500,'\n');
  set_address(temp2);

  set_type();

  char * temp3 = new char[500];
  cout << "Contents being picked up: ";
  cin.get(temp3,500);
  cin.ignore(500,'\n');
  set_contents(temp3);

  cout << endl;

  delete [] temp;
  delete [] temp2;
  delete [] temp3;
}
// destructor
pick_up::~pick_up(){

}
/*******************cod functions************************************/


// returns name for comparison
char * cod::get_name(){

  return name;

}
void cod::print_info(){

  cout << "ROUTE TYPE:::: " << d_type << endl;
  cout << "************************************" << endl;
  cout << "Customer Name: " << name << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Contents: " << contents << endl;
  cout << "Amount Due: " << cash_paid << endl << endl; 
  cout << "_____________________________________________\n\n\n";
 
}
// sets next pointer data
void cod::set_next(customer *& connection){

  next = connection;
  
}
// moves next
customer *& cod::get_next(){

  return next;

}
// sets name of customer with cod
char * cod::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
// sets cod delivery address
char * cod::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(address, a_address);

}
// sets contents of cod
char * cod::set_contents(char * a_contents){

  contents = new char[strlen(a_contents) + 1];
  strcpy(contents, a_contents);

}
// sets the amount needed upon delivery
void cod::set_cash(){

  cout << "Please set amount due: ";
  cin >> cash_paid;
  cin.ignore(100,'\n');

  cout << endl;

}
// sets type for display
char * cod::set_type(){

  char temp[15] = {'C','a','s','h','-','O','n','-','D','e','m','a','n','d','\n'};
 
  d_type = new char[strlen(temp)+1];
  strcpy(d_type, temp);

}
// constructor
cod::cod(){

  char * temp = new char[500];
  cout << "Name of the Person receiving: ";
  cin.get(temp,500);
  cin.ignore(500,'\n');
  set_name(temp);

  char * temp2 = new char[500];
  cout << "Address of receiver: ";
  cin.get(temp2,500);
  cin.ignore(500,'\n');
  set_address(temp2);

  set_type();

  char * temp3 = new char[500];
  cout << "Contents being delivered: ";
  cin.get(temp3,500);
  cin.ignore(500,'\n');
  set_contents(temp3);

  cout << endl;

  delete [] temp;
  delete [] temp2;
  delete [] temp3;
}
// destructor
cod::~cod(){

}
/********************signature req functions**************************/


// returns name for comparison
char * sig_req::get_name(){

  return name;

}
void sig_req::print_info(){

  cout << "ROUTE TYPE:::: " << d_type << endl;
  cout << "************************************" << endl;
  cout << "Customer Name: " << name << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Contents: " << contents << endl;

  if(signature)
    cout << "Signature Needed: " << "Yes" << endl;
  
  cout << "_____________________________________________\n\n\n";
 
}
// sets next data of sig req type
void sig_req::set_next(customer *& connection){

  next = connection;
  
}
// moves next
customer *& sig_req::get_next(){

  return next;

}
// sets name of signature required
char * sig_req::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
// sets address 
char * sig_req::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(address,a_address);

}
// sets contents being delivered
char * sig_req::set_contents(char * a_contents){

  contents = new char[strlen(a_contents) + 1];
  strcpy(contents, a_contents);

}
// Lets route know a sig is req and sets variable to true
void sig_req::set_sig(){

  cout << "Signature Needed" << endl << endl;
  signature = true;

}
// for display of type
char * sig_req::set_type(){

  char temp[10] = {'S','i','g','n','a','t','u','r','e','\n'};
 
  d_type = new char[strlen(temp)+1];
  strcpy(d_type,temp);

}
// constructor
sig_req::sig_req(){

  char * temp = new char[500];
  cout << "Name of the Person receiving: ";
  cin.get(temp,500);
  cin.ignore(500,'\n');
  set_name(temp);

  char * temp2 = new char[500];
  cout << "Address of receiver: ";
  cin.get(temp2,500);
  cin.ignore(500,'\n');
  set_address(temp2);

  set_type();

  char * temp3 = new char[500];
  cout << "Contents being delivered: ";
  cin.get(temp3,500);
  cin.ignore(500,'\n');
  set_contents(temp3);

  cout << endl;

  delete [] temp;
  delete [] temp2;
  delete [] temp3;
}
// destructor
sig_req::~sig_req(){

}


