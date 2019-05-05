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

    char * set_name(char * a_name);
    char * set_address(char * a_address);
    char * set_type();
    char * set_contents(char * a_contents);

    void set_next(customer * connection);
    void print_info(); 

    customer * get_next();
    
  protected:


    customer * next;

};
// pick up of item
class pick_up: public customer{

  public:

    pick_up();
    ~pick_up();

    char * set_name(char * a_name);
    char * set_address(char * a_adress);
    char * set_type();
    char * set_contents(char * a_contents);
    
    void set_next(customer * connection);
    void print_info(); 

    customer * get_next();
    
  protected:


};
// need a cash payment for delivery
class cod: public customer{

  public:

    cod();
    ~cod();

    char * set_name(char * a_name);
    char * set_address(char * a_adress);
    char * set_type();
    char * set_contents(char * a_contents);

    bool cash_collect();
   
    void set_cash();
    void set_next(customer * connection);
    void print_info(); 

    customer * get_next();
    
  protected:

    float cash_paid;

};
// need a signature for delivery
class sig_req: public customer{

  public:

    sig_req();
    ~sig_req();

    char * set_name(char * a_name);
    char * set_address(char * a_adress);
    char * set_type();
    char * set_contents(char * a_contents);
    
    bool sig_collect();

    void set_next(customer * connection);
    void print_info(); 

    customer * get_next();
    
  protected:

    bool signature;

};
