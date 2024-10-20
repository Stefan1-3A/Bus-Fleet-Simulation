#include <iostream>
#include <string>

using namespace std;

class Bus {
    private:
        int id, routeNumber, capacity, currentPassengers;
        string location;

    public:
            Bus(int busId, int route, int busCapacity) {
            id = busId;
            routeNumber = route;
            capacity = busCapacity;
            currentPassengers = 0;
            location = "station";
    }

    void startBus() {
        location = "on the road";
        cout << "Bus" << id << " has started its route on route " << routeNumber << "." << endl;
    }

    void stopBusAtStation() {
    location = "station";
    cout << "Bus" << id << " has stopped at a station." << endl;
    }

    void boardPassengers(int passengers) {
        if(currentPassengers + passengers <= capacity) {
            currentPassengers += passengers;
            cout << passengers << " passengers boarded bus " << id << "." << endl;
        } else {
            cout << "Not enough capacity to board " <<passengers << " passengers." << endl;
        }
    }

    void deboardPassengers(int passengers) {
        if (passengers <= currentPassengers) {
            currentPassengers -= passengers;
            cout << "Only" << currentPassengers << " passengers on the bus." << endl;
        }
    }

    void displayBusStatus() {
        cout << "Bus ID: " << id << endl;
        cout << "Route Number " << routeNumber << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Current Passengers: " << currentPassengers << endl;
        cout << "Location: " << location << endl;
    }

};

/*
// TEST

int main() {

    Bus bus1(101, 5, 50);

    bus1.displayBusStatus();

    bus1.startBus();
    bus1.displayBusStatus();

    bus1.boardPassengers(20);
    bus1.displayBusStatus();

    bus1.deboardPassengers(5);
    bus1.displayBusStatus();

    bus1.stopBusAtStation();
    bus1.displayBusStatus();

    return 0;
}
*/
