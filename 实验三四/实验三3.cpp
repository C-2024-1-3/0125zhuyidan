#include <iostream>
#include <iomanip> 
#include "mytemperature.h"

int main() {
    std::cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    double celsius = 40.0;
    double fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 120.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius <<std::endl;
    celsius = 39.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 110.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;
    celsius = 38.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 100.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;
    celsius = 37.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 90.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;
    celsius = 36.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 80.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;
    celsius = 35.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 70.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;
    celsius = 34.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 60.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;
    celsius = 33.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 50.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;
    celsius = 32.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 40.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;
    celsius = 31.0;
    fahrenheit = celsius_to_fah(celsius);
    std::cout << std::fixed << std::setprecision(1) << celsius << "\t" << fahrenheit << "\t|\t";
    fahrenheit = 30.0;
    celsius = fahrenheit_to_cels(fahrenheit);
    std::cout << std::fixed << std::setprecision(1) << fahrenheit << "\t" << std::setprecision(2) << celsius << std::endl;

    return 0;
}