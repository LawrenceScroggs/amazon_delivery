// Lawrence Scroggs CS202 Program 2 05/01/19

// This will hold all the different delivery classes
// There will be four delivery classes.  A pick up class
// for when there is a pick up in area.  A signature required
// delivery.  A standard delivery and a Cash on Demand Delivery.



#include "delivery.h"



/*******************delivery functions********************************/

char * delivery::get_name(){

}
char * delivery::get_address(){


}
char * delivery::get_type(){



}
char * delivery::get_content(){



}
delivery::delivery(char * a_name, char * a_address, char * a_d_type, char * a_contents):customer(a_name,a_address,a_d_type,a_contents)
{

  buyer = NULL;
  rear = NULL;

}
delivery::delivery(){

}
delivery::~delivery(){



}


/*******************pick up functions*********************************/


/*******************cod functions************************************/



/********************signature req functions**************************/





