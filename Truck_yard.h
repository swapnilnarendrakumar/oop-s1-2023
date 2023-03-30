#include <iostream>
using namespace std;

class truckyard() public: truck{
    private:
    int capacity;
    int * current_stock_list;
    string brand;
    public:
    Truck_yard();                           
    Truck_yard(int capacity);
    int get_total_stock_count();
    int get_stock_count(int code);
    Truck *get_current_stock_list();
    bool add_stock;
    ~Truck_yard();
}