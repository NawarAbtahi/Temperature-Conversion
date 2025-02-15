#include <stdio.h>
#include <stdbool.h>

float celciustoFahrenheit(float t);
float celciustoKelvin(float t);
float fahrenheittoCelcius(float t);
float fahrenheittoKelvin(float t);
float kelvintoCelcius(float t);
float kelvintoFahrenheit(float t);
void clearinputBuffer();

int main(){
  int choice;
  float temperature;

  while (1) {
    printf("\n\nTemperature Converter\n\n");
    printf("1. Celcius to Fahrenheit\n");
    printf("2. Celius to Kelvin\n");
    printf("3. Fahrenheit to Celcius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celcius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("7. Exit\n\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 7){
      break;
    }

    if(choice < 1 || choice > 7){
      printf("Invalid Input! press any key to continue...\n");
      clearinputBuffer();
      getchar();
      continue;
    }
    
    printf("Enter your temperature: ");
    scanf("%f", &temperature);

    switch (choice) {
      case 1:
        printf("Temperature : %.2fF\n\n", celciustoFahrenheit(temperature));
        break;
      case 2:
        printf("Temperature: %.2fK\n\n", celciustoKelvin(temperature));
        break;
      case 3:
        printf("Temperature: %.2fC\n\n", fahrenheittoCelcius(temperature));
        break;
      case 4:
        printf("Temperature: %.2fK\n\n", fahrenheittoKelvin(temperature));
        break;
      case 5:
        printf("Temperature: %.2fC\n\n", kelvintoCelcius(temperature));
        break;
      case 6:
        printf("Temperature: %.2fF\n\n", kelvintoFahrenheit(temperature));
        break;
    }
    printf("Press any key to continue...\n");
    clearinputBuffer();
    getchar();
  }

  return 0;
}

float celciustoFahrenheit(float t){
  float Tf = ((9 * t)/ 5) + 32;
  return Tf;
}
float celciustoKelvin(float t){
  float Tk = 273.15 + t;
  return Tk; 
}
float fahrenheittoCelcius(float t){
  float Tc = (5 * (t - 32)) / 9;
  return Tc;
}
float fahrenheittoKelvin(float t){
  float Tk = ((5 * (t - 32)) / 9) + 273.15;
  return Tk; 
}
float kelvintoCelcius(float t){
  float Tc = t - 273.15;
  return Tc; 
}
float kelvintoFahrenheit(float t){
  float Tf = ((9 * (t - 273.15)) / 5) + 32;
  return Tf;
}
void clearinputBuffer(){
  while (getchar() != '\n');
}
