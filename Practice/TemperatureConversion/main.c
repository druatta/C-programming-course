#include <stdio.h>

#define TemperatureLowerLimit 0
#define TemperatureUpperLimit 300
#define TemperatureStepSize 20

int main() {

  int TemperatureInFahrenheit;

  for (TemperatureInFahrenheit = TemperatureLowerLimit;
        TemperatureInFahrenheit <= TemperatureUpperLimit;
        TemperatureInFahrenheit = TemperatureInFahrenheit + 20) {
          printf("%3d  %5.3f \n", TemperatureInFahrenheit,
            (5.0/9.0) * (TemperatureInFahrenheit - 32));
        }

}