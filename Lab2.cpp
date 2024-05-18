#include <iostream>

class Transport {
private:
    int speed = 0;
    int frequency = 0;

public:
    int getFrequency() {
        return this->frequency;
    }
    int getSpeed() {
        return this->speed;
    }
    virtual bool go() {
        std::cout << "abstract";
        return true;
    }
    bool stop() {
        return true;
    }
    bool changeTransmission(int transmission) {
        return true;
    }
};


class Car : public Transport {
public:
    bool openWindow() {
        return true;
    }
    bool closeWindow() {
        return true;
    }
    bool startSportMode() {
        return true;
    }
    bool stopSportMode() {
        return true;
    }
};

class Bus : public Transport {
public:
    bool getTicket() {
        return true;
    }
    bool openDoors() {
        return true;
    }
    bool closeDoors() {
        return true;
    }
};

class Airplane : public Transport {
private:
    int overload = 0;
    int latitude = 0;
    int longitude = 0;

public:
    int getLatitude() {
        return this->latitude;
    }
    int getLongitude() {
        return this->longitude;
    }
    int getOverload() {
        return this->overload;
    }
    bool startAutopilot() {
        return true;
    }
    bool stopAutopilot() {
        return true;
    }
    bool go() {
        std::cout << "class";
        return true;
    }
    bool stop() {
        return true;
    }
};

class Driver {
private:
    bool go(Transport transport) {
        transport.go();
        return true;
    }
    bool stop(Transport transport) {
        transport.stop();
        return true;
    }
};

class BusDriver : Driver {
    BusDriver(Bus bus) {
        this->driveBus = bus;
        checkTC(bus);
        bus.changeTransmission(1);
        bus.getSpeed();
        bus.getFrequency();
        bus.go();
        bus.changeTransmission(2);
        bus.getSpeed();
        bus.getFrequency();
        bus.go();
        bus.changeTransmission(3);
        bus.getSpeed();
        bus.getFrequency();
        bus.go();
    }
    bool getTicket() {
        driveBus.getTicket();
    }
private:
    Bus driveBus;
    bool checkTC(Bus bus) {
        return true;
    }
};

class PersonalDriver : Driver {
    PersonalDriver(Car car) {
        this->driveCar = car;
        checkTC(car);
        car.changeTransmission(1);
        car.getSpeed();
        car.getFrequency();
        car.go();
        car.changeTransmission(2);
        car.getSpeed();
        car.getFrequency();
        car.go();
        car.changeTransmission(3);
        car.getSpeed();
        car.getFrequency();
        car.go();
    }
private:
    Car driveCar;
    bool checkTC(Car car) {
        return true;
    }
};




int main()
{
    Airplane r;
    Transport *a = &r;
    (*a).go();
}
