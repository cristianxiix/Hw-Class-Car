// Example program
#include <iostream>
#include <string>
class Car
{
private:
    std::string make;
    std::string model;
    int max_speed;
    int current_speed;

public:

    Car(std::string make, std::string model, int max_speed)
    {
        this->make = make;
        this->model = model;
        this->max_speed = max_speed;
        current_speed = 0;
    }
    void Accelerate(int go_over_currentSpeed_by)
    {
        if ((go_over_currentSpeed_by + current_speed) > max_speed)
        {
            go_over_currentSpeed_by = max_speed;
            std::cout << "Viteza dorita depaseste viteza maxima. Acceleram spre viteza maxima...CU " << max_speed << " km/h." << std::endl;
            current_speed += go_over_currentSpeed_by;
            std::cout << "Viteza curenta: " << current_speed << std::endl;

        }
        else if ((go_over_currentSpeed_by + current_speed) < max_speed)
        {
            std::cout << "Acceleram.. Crestem viteza cu " << go_over_currentSpeed_by << " km/h." << std::endl;
            current_speed += go_over_currentSpeed_by;
            std::cout << "Viteza curenta: " << current_speed << std::endl;
        }
        else
        {
            std::cout << "Acceleram spre viteza maxima...Viteza introdusa: " << go_over_currentSpeed_by << " km/h." << std::endl;
            current_speed += go_over_currentSpeed_by;
            std::cout << "Viteza curenta: " << current_speed << std::endl;
        }
    }
    void Franeaza()
    {
        std::cout << "Franam! Tine-te bine!" << std::endl;
        current_speed = 0;
        std::cout << "Am ajuns la un stop complet. Viteza curenta este " << current_speed << " km/h." << std::endl;
    }
};
int main()
{
    Car c1("Renault", "Megane GT", 240);
    c1.Accelerate(240);
    c1.Franeaza();
}