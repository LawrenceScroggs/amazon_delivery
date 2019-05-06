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
    void display_route(); 

  protected:

    void add_pick_up(); // sets a pick up
    void add_delivery(); // sets delivery
    void add_cod(); // sets cod

    /***RECURSIVE CALLS****************/
    void display_route(customer * rear);
    void add_delivery(customer * rear);
    void add_pick_up(customer * rear); 
    void add_cod(customer * rear);

    customer * rear;



};
