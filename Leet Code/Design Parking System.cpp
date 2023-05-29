//  Design Parking System
class ParkingSystem {
public:

    int space[3];
    ParkingSystem(int big, int medium, int small) {
        space[0] = big;
        space[1] = medium;
        space[2] = small;
        
    }
    
    bool addCar(int carType) {
     if(space[carType - 1] > 0){
         space[carType - 1]--;
         return true;
     }  
     else{
         return false;
     }
    }
};

// --------------------------------------------------------------------
/*

class ParkingSystem {
public:
    int space[3]; // Array to store the available spaces for each car type

    ParkingSystem(int big, int medium, int small) {
        space[0] = big; // Initializing the number of available spaces for big cars
        space[1] = medium; // Initializing the number of available spaces for medium cars
        space[2] = small; // Initializing the number of available spaces for small cars
    }
    
    bool addCar(int carType) {
        if (space[carType - 1] > 0) { // If there is an available space for the given car type
            space[carType - 1]--; // Decrease the count of available spaces for the car type
            return true; // Car can be parked
        }  
        else {
            return false; // No available space for the car type, cannot be parked
        }
    }
};
*/
