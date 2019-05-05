// Lawrence Scroggs CS202 Program 2 05/01/19
//
// This program will hold all the functions to build
// the delivery schedule.  From here we will have user
// decide the type of delivery and build the schedule
// This will essentially be a CLL build



#include "schedule.h"



// wrapper for display
void schedule::display_route(){


}
// wrapper function
void schedule::add_delivery(){

  if(!rear){

    rear =new delivery;
    return;

  }
  
  add_delivery(rear->get_next());

}
void schedule::add_delivery(customer * rear){

  if(!rear->get_next()){
    customer * temp = new delivery;
    rear->set_next(temp);
    return;
  }
}  
void schedule::delivery_type(){

  cout << "Please enter the type of delivery you want:\n"
       << "A: for delivery\n"
       << "B: for pickup\n"
       << "C: for cash on demand\n"
       << "D: for signature required\n"
       << "E: to exit and finish schedule\n";

  char choice = ' ';
  while(choice != 'E'){
    cin >> choice;
    cin.ignore(100,'\n');

    switch (choice){

      case 'A':
                add_delivery();
                break;
      case 'B':
                break;
      case 'C':
                break;
      case 'D':
                break;
      case 'E':
                break;

      default :
                break;
    }
  }

}
schedule::schedule(){

  rear = NULL;

}
schedule::~schedule(){


}
