#include <iostream>
using namespace std;

class heater
{
private:
    int temprature;

public:
    heater()
    {
        temprature = 15;
    }
    int gettemprature()
    {
        return temprature;
    }
    void warmer()
    {
        temprature = temprature + 5;
        cout << "The warmer Temprature is: " << temprature << endl;
    }
    void cooler()
    {
        temprature = temprature - 5;
        cout << "The cooler Temprature is: " << temprature << endl;
    }
};

int main()
{

    heater h1, h2;
    cout<<"For Heater One"<<endl;
    cout << "The Current Temprature is: " << h1.gettemprature() << endl;
    h1.warmer();
    h1.cooler();
        cout<<"For Heater Two"<<endl;
    cout << "The Current Temprature is: " << h1.gettemprature() << endl;
    h1.cooler();
    h1.warmer();
    

    return 0;
}