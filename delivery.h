// Lawrence Scroggs CS202 Program 2 05/01/19

// This will hold all the different delivery classes
// There will be four delivery classes.  A pick up class
// for when there is a pick up in area.  A signature required
// delivery.  A standard delivery and a Cash on Demand Delivery.



#include "customer.h"


// regular delivery
class delivery: public customer{

  public:
    delivery(char * a_name, char * a_address, char * a_d_type, char * a_contents);
    delivery();
    ~delivery();

    char * get_name();
    char * get_address();
    char * get_type();
    char * get_contents();

  protected:

    customer * buyer;

    customer * rear;


};
// pick up of item
class pick_up: public customer{

  public:

    pick_up();
    ~pick_up();

    char * get_name();
    char * get_address();
    char * get_type();
    char * get_contents();
    
  protected:


};
// need a cash payment for delivery
class cod: public customer{

  public:

    cod();
    ~cod();

    char * get_name();
    char * get_address();
    char * get_type();
    char * get_contents();
    
  protected:

    float cash_paid;

};
// need a signature for delivery
class sig_req: public customer{

  public:

    sig_req();
    ~sig_req();

    char * get_name();
    char * get_address();
    char * get_type();
    char * get_contents();
    
  protected:

    bool signature;

};
