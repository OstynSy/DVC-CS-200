#include <iostream>
#include <string>
#include "Ostyn_Sy_Ship.h"
#include "Ostyn_Sy_CruiseShip.h"
#include "Ostyn_Sy_CargoShip.h"
using namespace std;


int main()
{
    // Create an array of Ship pointers, initialized with
    // the addresses of 3 dynamically allocated objects.
    Ship *ships[3] = { new Ship("The First Generation", "200"),
                       new CruiseShip("The Next Generation", "2000", 16000),
                       new CargoShip("The Last Generation", "7862", 10)
                     };

    // Call each object's print function using polymorphism.
    for (int index=0; index < 3; index++)
    {
        ships[index]->print();
        cout << "----------------------------\n";
        
        delete ships[index];     //release memory (avoid memory leak)
        ships[index] = nullptr;   //avoid dangling pointer
    }
    
           
    system("PAUSE");
    return 0;
}
