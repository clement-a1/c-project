#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    
    //ask user to input in temperature
    cout << "Input in temperature in celsius: ";
    cin >> celsius;
    
    //Convert from celsius to fahrenheit
    fahrenheit = (celsius * 1.8) + 32;
    
    //Output
    cout << "Temperature converted to fahrenheit: " << fahrenheit  << " °F"<<endl;
    
    //bonous
     if(celsius < 0) {
         cout << "Freezing!" << endl;
     } 
     //if is above 
    if (celsius > 30 ){
         cout << "hot!" << endl;
     } 
    return 0;
}
