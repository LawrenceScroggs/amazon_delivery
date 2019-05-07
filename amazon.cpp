// Lawrence Scroggs CS202 Program 2 05/01/19

// This will be the main in the program
// This program is going to be able to implement 
// different types of customers. I will put these list
// of customers into a CLL.  They will all share the same
// parent class and use dynamic binding and RTTI


#include "schedule.h"



int main(){

  schedule route1;

  //sets up route for delivery
  route1.delivery_type();

  //displays route;
  route1.display_route();

  //deletes route;
  route1.delete_route();


  return 0;

}
