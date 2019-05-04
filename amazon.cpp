// Lawrence Scroggs CS202 Program 2 05/01/19

// This will be the main in the program
// This program is going to be able to implement 
// different types of customers. I will put these list
// of customers into a CLL.  They will all share the same
// parent class and use dynamic binding and RTTI


#include "delivery.h"



int main(){

  customer * a = new delivery;
  delivery * d = dynamic_cast<delivery*>(a);


  if(!d)
    cout << "error" << endl;

  else
    cout << "successful" << endl;
  
  char choice = ' ';

  switch (choice){

    default : 
      cout << "Invalid Choice" << '\n' << '\n';
    case 'D':
      {    
      d->set_next();
      }


  }

  return 0;

}
