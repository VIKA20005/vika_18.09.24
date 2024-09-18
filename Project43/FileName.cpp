#include <string>
#include <iostream>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    double price;

public:

    Car(const std::string& make, const std::string& model, int year, double price);
    Car();


    ~Car();


    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getPrice() const;


    void input();
    void display() const;
};

Car::Car(const std::string& make, const std::string& model, int year, double price)
    : make(make), model(model), year(year), price(price) {}


Car::Car() : make(""), model(""), year(0), price(0.0) {}


Car::~Car() {

}


std::string Car::getMake() const {
    return make;
}

std::string Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

double Car::getPrice() const {
    return price;
}
void Car::input() {
    std::cout << "Введіть виробника: ";
    std::getline(std::cin, make);
    std::cout << "Введіть модель: ";
    std::getline(std::cin, model);
    std::cout << "Введіть рік випуску: ";
    std::cin >> year;
    std::cout << "Введіть ціну: ";
    std::cin >> price;
    std::cin.ignore();
}


void Car::display() const {
    std::cout << "Виробник: " << make << "\n";
    std::cout << "Модель: " << model << "\n";
    std::cout << "Рік випуску: " << year << "\n";
    std::cout << "Ціна: $" << price << "\n";
}

int main() {
    Car car;
    car.input();
    std::cout << "\nДані про автомобіль:\n";
    car.display();
    return 0;
}
