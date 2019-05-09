// Lawrence Scroggs CS202 Program 2 05/01/19
//
// This program will hold all the functions to build
// the delivery schedule.  From here we will have user
// decide the type of delivery and build the schedule
// This will essentially be a CLL build



#include "schedule.h"



// removes a delivery type upon request
void schedule::remove(){

  char * temp = new char[100];
  cout << "Please Enter the delivery you are looking to remove: ";
  cin.get(temp,100);
  cin.ignore(100,'\n');


  if(rear == rear->get_next()){
    if(strcmp(temp,rear->get_name()) == 0){
        cout << "match found" << endl;
        delete_route();
        return;
        }
    else
      cout << "No Match Found" << endl;

    delete temp;
    return;

  }

  customer * prev = rear;
  customer * current = rear;
  current = current->get_next();

  remove(current,prev,temp);

}
// recursive call to find match and delete
void schedule::remove(customer * current, customer * prev,char * temp){

  if(current == rear->get_next()){
    cout << "No match found" << endl;
    delete temp;
    return;
  }
  if(strcmp(temp,current->get_name()) == 0){
    prev->set_next(current->get_next());
    delete current;
    delete temp;
    cout << "Match Found. Removed Succesfully" << endl;
    return;
  }
  
  prev = current;
  current = current->get_next();

  remove(current,prev,temp);

}
// deletes our route 
void schedule::delete_route(){

  //if only one in route
  if(rear == rear->get_next()){
    cout << "Deleted Succesfully" << endl;
    delete rear;
    rear = NULL;
    return;
  }

  customer * current = rear->get_next();
  delete_route(current);

}
//recursive call to delete route
void schedule::delete_route(customer * current){


  customer * temp = current;
  if(current == rear){
    delete rear;
    cout << "Deleted Succesfully!!!" << endl;
    return;
  }
  current = current->get_next();
  delete temp;
  temp = NULL;

  delete_route(current);
}
// this will link the CLL
void schedule::link_up(){

  customer * current = rear;

  if(!current->get_next()){
    current->set_next(rear);
    return;
  }

  else
  current = current->get_next();

  link_up(current);

}
// recursive call for link up
void schedule::link_up(customer * current){

  if(!current->get_next()){
    current->set_next(rear);
    return;
  }
  
  link_up(current = current->get_next());

}
// wrapper for display
void schedule::display_route(){

  if(!rear){
    cout << "No Route Scheduled\n\n";
    return;
  }
  customer * current = rear->get_next(); // setting beginning of list

  rear->print_info();

  display_route(current);

}
// recursive call for display
void schedule::display_route(customer * current){

  if(current == rear){
    cout << "!!!!!!!!END OF ROUTE!!!!!!!!!!!\n\n";
    return;
  }

  current->print_info();

  display_route(current = current->get_next());

}
// wrapper function for adding delivery
void schedule::add_delivery(){

  if(!rear){

    rear = new delivery;
    
    return;

  }
  
  add_delivery(rear);

}
//recursive call to move to empty spot
void schedule::add_delivery(customer * rear){

  if(!rear->get_next()){
    customer * temp = new delivery;
    rear->set_next(temp);

    return;
  }

  add_delivery(rear = rear->get_next());
}  
// wrapper function for adding pick up
void schedule::add_pick_up(){

  if(!rear){

    rear = new pick_up;
    return;

  }
  
  add_pick_up(rear);

}
//recursive call to move to empty spot
void schedule::add_pick_up(customer * rear){

  if(!rear->get_next()){
    customer * temp = new pick_up;
    rear->set_next(temp);
    return;
  }

  add_pick_up(rear = rear->get_next());
}  
// wrapper function for adding cod
void schedule::add_cod(){

  if(!rear){

    rear = new cod;
    cod * c = dynamic_cast<cod*>(rear);
    c->set_cash();
    return;

  }
  
  add_cod(rear);

}
//recursive call to move to empty spot
void schedule::add_cod(customer * rear){

  if(!rear->get_next()){
    customer * temp = new cod;
    cod * c = dynamic_cast<cod*>(temp);
    c->set_cash();
    rear->set_next(temp);
    return;
  }

  add_cod(rear = rear->get_next());
}  
// wrapper function for adding sig_req
void schedule::add_sig_req(){

  if(!rear){

    rear = new sig_req;
    sig_req * s = dynamic_cast<sig_req*>(rear);
    s->set_sig();
    return;

  }
  
  add_sig_req(rear);

}
//recursive call to move to empty spot
void schedule::add_sig_req(customer * rear){

  if(!rear->get_next()){
    customer * temp = new sig_req;
    sig_req * s = dynamic_cast<sig_req*>(temp);
    s->set_sig();
    rear->set_next(temp);
    return;
  }

  add_sig_req(rear = rear->get_next());
}  
// this is main hub to build route
void schedule::delivery_type(){

  char choice = ' ';

  while(choice != 'E'){
    cout << "Please enter the type of delivery you want:\n"
         << "A: for delivery\n"
         << "B: for pickup\n"
         << "C: for cash on demand\n"
         << "D: for signature required\n"
         << "E: to exit and finish schedule\n";

    cin >> choice;
    cin.ignore(100,'\n');
    choice = toupper(choice);

    switch (choice){

      case 'A':
                add_delivery();
                break;
      case 'B':
                add_pick_up();
                break;
      case 'C':
                add_cod();
                break;
      case 'D':
                add_sig_req();
                break;
      case 'E':
                link_up();
                break;

      default :
                cout << "Wrong Input" << endl;
                break;
    }
  }

}
// constructor
schedule::schedule(){

  rear = NULL;

}
// destructor
schedule::~schedule(){


}
