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
    void add_delivery(); // sets first delivery/pick up of day;
    void display_route(); 

  protected:

    void add_delivery(customer * rear);

    customer * rear;



};
