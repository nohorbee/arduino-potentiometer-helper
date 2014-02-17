#arduino-potenciometer-helper

##About
A library to handle potentiometers on a OO way.
Despite of the triviality of the operations, having libraries results useful when more than one potentiometer is being managed. Additionally, libraries can be incrementally developed, including more complex functionality in the future,

###Hands On

####1. Clone the repository 
(or include it as a submodule in your own project)

####2. Import the library
Open your Arduino IDE (If you have not installed it, please follow the steps indicated [here](http://arduino.cc/en/Guide/HomePage)) and import the library (if you don't know how to install a library, you need to read [this](http://arduino.cc/en/Guide/Libraries)).

####3. What to expect?
You should be able to call 

    Potenciometer potenciometer = Potenciometer(potenciometerPin); 
    // potenciometerPin: a byte constant indicating the pin
    // to which the potenciometer is connected.

Once you have the potenciometer object, you can call any of its methods.
