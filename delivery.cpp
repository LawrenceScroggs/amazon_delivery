// Lawrence Scroggs CS202 Program 2 05/01/19

// This will hold all the different delivery classes
// There will be four delivery classes.  A pick up class
// for when there is a pick up in area.  A signature required
// delivery.  A standard delivery and a Cash on Demand Delivery.



#include "delivery.h"



/*******************delivery functions********************************/

void delivery::print_info(){

  cout << "ROUTE TYPE:::: " << d_type << endl;
  cout << "************************************" << endl;
  cout << "Customer Name: " << name << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Contents: " << contents << endl << endl;
  cout << "_____________________________________________\n\n\n";
 
}
void delivery::set_next(customer * connection){


  next = connection;
  
}
customer *& delivery::get_next(){

  return next;

}
char * delivery::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
char * delivery::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(address, a_address);

}
char * delivery::set_type(){

  
  char temp[9]  = {'D','e','l','i','v','e','r','y','\n'};
 
  d_type = new char[9];

  strcpy(d_type, temp);

}
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
  delete temp;

  char * temp2 = new char[500];
  cout << "Address of receiver: ";
  cin.get(temp2,500);
  cin.ignore(500,'\n');
  set_address(temp2);
  delete temp2;

  set_type();

  char * temp3 = new char[500];
  cout << "Contents being delivered: ";
  cin.get(temp3,500);
  cin.ignore(500,'\n');
  set_contents(temp3);
  delete temp3;

}
delivery::~delivery(){


}


/*******************pick up functions*********************************/

void pick_up::print_info(){

  cout << "ROUTE TYPE:::: " << d_type << endl;
  cout << "************************************" << endl;
  cout << "Customer Name: " << name << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Contents: " << contents << endl << endl;
  cout << "_____________________________________________\n\n\n";
 
}
void pick_up::set_next(customer * connection){


  next = connection;
  
}
customer * pick_up::get_next(){

  return next;

}
char * pick_up::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
char * pick_up::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(address, a_address);

}
char * pick_up::set_contents(char * a_contents){

  contents = new char[strlen(a_contents) + 1];
  strcpy(contents, a_contents);

}
char * pick_up::set_type(){

  char temp[8]  = {'P','i','c','k','-','U','p','\n'};
 
  d_type = new char[8];

  strcpy(d_type, temp);

}
pick_up::pick_up(){

  char * temp = new char[500];
  cout << "Name of the Person needing Pick-Up: ";
  cin.get(temp,500);
  cin.ignore(500,'\n');
  set_name(temp);
  delete temp;

  char * temp2 = new char[500];
  cout << "Address of receiver: ";
  cin.get(temp2,500);
  cin.ignore(500,'\n');
  set_address(temp2);
  delete temp2;

  set_type();

  char * temp3 = new char[500];
  cout << "Contents being picked up: ";
  cin.get(temp3,500);
  cin.ignore(500,'\n');
  set_contents(temp3);
  delete temp3;

}
pick_up::~pick_up(){

}
/*******************cod functions************************************/

void cod::print_info(){

  cout << "ROUTE TYPE:::: " << d_type << endl;
  cout << "************************************" << endl;
  cout << "Customer Name: " << name << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Contents: " << contents << endl;
  cout << "Amount Due: " << cash_paid << endl << endl; 
  cout << "_____________________________________________\n\n\n";
 
}
void cod::set_next(customer * connection){


  next = connection;
  
}
customer * cod::get_next(){

  return next;

}
char * cod::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
char * cod::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(name, a_address);

}
char * cod::set_contents(char * a_contents){

  contents = new char[strlen(a_contents) + 1];
  strcpy(name, a_contents);

}
void cod::set_cash(){

  cout << "Please set amount due: ";
  cin >> cash_paid;
  cin.ignore(100,'\n');

}
char * cod::set_type(){

  char temp[15] = {'C','a','s','h','-','O','n','-','D','e','m','a','n','d','\n'};
 
  d_type = new char[15];

  strcpy(d_type, temp);

}
cod::cod(){

  char * temp = new char[500];
  cout << "Name of the Person receiving: ";
  cin.get(temp,500);
  cin.ignore(500,'\n');
  set_name(temp);
  delete temp;

  char * temp2 = new char[500];
  cout << "Address of receiver: ";
  cin.get(temp2,500);
  cin.ignore(500,'\n');
  set_address(temp2);
  delete temp2;

  set_type();

  char * temp3 = new char[500];
  cout << "Contents being delivered: ";
  cin.get(temp3,500);
  cin.ignore(500,'\n');
  set_contents(temp3);
  delete temp3;

}
cod::~cod(){


}
/********************signature req functions**************************/

void sig_req::print_info(){

  cout << "ROUTE TYPE:::: " << d_type << endl;
  cout << "************************************" << endl;
  cout << "Customer Name: " << name << endl;
  cout << "Customer Address: " << address << endl;
  cout << "Contents: " << contents << endl;
  cout << "Signature Needed: " << "Yes" << endl << endl;
  cout << "_____________________________________________\n\n\n";
 
}
void sig_req::set_next(customer * connection){

  next = connection;
  
}
customer * sig_req::get_next(){

  return next;

}
char * sig_req::set_name(char * a_name){

  name = new char[strlen(a_name) + 1];
  strcpy(name,a_name);

}
char * sig_req::set_address(char * a_address){

  address = new char[strlen(a_address) + 1];
  strcpy(name, a_address);

}
char * sig_req::set_contents(char * a_contents){

  contents = new char[strlen(a_contents) + 1];
  strcpy(name, a_contents);

}
void sig_req::set_sig(){

  cout << "Signature Needed" << endl;
  signature = true;

}
char * sig_req::set_type(){

  char temp[19] = {'S','i','g','n','a','t','u','r','e','-','R','e','q','u','i','r','e','d','\n'};
 
  d_type = new char[19];

  strcpy(d_type, temp);

}
sig_req::sig_req(){

  char * temp = new char[500];
  cout << "Name of the Person receiving: ";
  cin.get(temp,500);
  cin.ignore(500,'\n');
  set_name(temp);
  delete temp;

  char * temp2 = new char[500];
  cout << "Address of receiver: ";
  cin.get(temp2,500);
  cin.ignore(500,'\n');
  set_address(temp2);
  delete temp2;

  set_type();

  char * temp3 = new char[500];
  cout << "Contents being delivered: ";
  cin.get(temp3,500);
  cin.ignore(500,'\n');
  set_contents(temp3);
  delete temp3;

}
sig_req::~sig_req(){

}


