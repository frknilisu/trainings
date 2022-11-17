#include <iostream>

using namespace std;

enum class Alert { red, green, blue };

enum class TrafficLightState { red, yellow, green };

int main()
{
    Alert a = Alert::red;
    TrafficLightState ts = TrafficLightState::red;
    return 0;
}