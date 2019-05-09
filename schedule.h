// This will hold all the objects of different delivery
// types and schedule as the client wants.  This will hold
// the rear and the next pointers to implement the CLL.
// along with different functions for the objects





#include "delivery.h"



class schedule{

  public:

    schedule();
    ~schedule();

    void delivery_type(); // sets the type of delivery
    void display_route(); // displays the route
    void delete_route(); // deletes entire route
    void remove(); // removes specific delivery type

  protected:

    void add_pick_up(); // sets a pick up
    void add_delivery(); // sets delivery
    void add_cod(); // sets cod
    void add_sig_req(); // set sig_req
    void link_up(); // connects CLL

    /***RECURSIVE CALLS****************/
    void remove(customer * current,customer * prev, char * temp);
    void delete_route(customer * current);
    void link_up(customer * current);
    void display_route(customer * rear);
    void add_delivery(customer * rear);
    void add_pick_up(customer * rear); 
    void add_cod(customer * rear);
    void add_sig_req(customer * rear);

    customer * rear;

};
