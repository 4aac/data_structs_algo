#include <iostream>
using namespace std;

// STRUCTS
// https://www.youtube.com/watch?v=ObUUe9ujYoY
struct student
{
    string name;
    double gpa;
    bool enrolled; // wwe can use enrolled = true; so it is predefined every time.
};

int main1()
{
    // First student
    student student1;
    student1.name = "Asier";
    student1.gpa = 3.2;
    student1.enrolled = true;

    // Second student
    student student2;
    student2.name = "Patrick";
    student2.gpa = 3.1;
    student2.enrolled = false;

    cout << student1.name << "\n";
    cout << student2.name << "\n";


    return 0;
};

// https://www.youtube.com/watch?v=Iv-ZBq4Bcps
struct Car
{
    string model;
    int year;
    string color;

};

// Function decorators (basically declares the function before executing it)
void printCar(Car car);
void paintCar(Car &car, string color);

int main2()
{
    Car car1;
    Car car2;

    car1.model = "Opel";
    car1.year = 1999;
    car1.color = "Black";

    car2.model = "Opel";
    car2.year = 1999;
    car2.color = "Black";

    printCar(car1);
    printCar(car2);

    paintCar(car1, "pink");

    printCar(car1);

    return 0;
};

void printCar(Car car)
{
    cout << car.model << ", " << car.year  << ", " << car.color;
};

void paintCar(Car &car, string color)  // & basically says that it has to use the same memory direction 
                                       // where the variable is declared and dont create a new one
{
    car.color = color;
};


// OBJECTS AND CLASSES  
// https://www.youtube.com/watch?v=_8H2n0nDfd4

class Human 
{
    public:
        string name;
        string occupation;
        int age;

        void eat()
        {
            cout << "This person is eating";
        };

        void drink()
        {
            cout << "This person is drinking";
        };

        void sleep()
        {
            cout << "This person is sleeping";
        };
};

int main3()
{
    Human human1;
    human1.name = "Acuña";
    human1.occupation = "scientist";
    human1.age = 70;

    cout << human1.name << "\n";
    cout << human1.occupation << "\n";
    cout << human1.age << "\n";

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
};


// POINTERS 
// https://www.youtube.com/watch?v=slzcWKWCMBg

int main() 
{
    string name = "Asier";
    string *pName = &name;  // & is the operator that shows the memory address
                            // * is the operator that access to the value of the address
                            // the convention for the naming is p____ with a high case character next to the p

    cout << *pName;

    int age = 897;
    int *pAge = &age;

    cout << *pAge;

    string pizza[4] = {"pizza1", "pizza2", "pizza3", "pizza4"};
    // string *pPizza = &pizza; esto no funcionaría porque la variable pizza ya es una dirección de memoria a la que hacen referencia los valores
    cout << pizza; // it is already a memory address
    cout << *pizza; // return the first element of the array



    return 0;
};


// NULL POINTER
//https://www.youtube.com/watch?v=yKT_Rwx4lsQ

int main()
{
    int *pointer = nullptr;  // if we arent gonna use the pinter for a while its a good practice to use a nullptr
    int x = 123;
    pointer = &x;

    // its a good practice to check if used pointers are null
    if (pointer == nullptr)
    {
        cout << "address wasnt assigned";
    }

    else
    {
        cout << "address was assigned";
    }
    
    return 0;
};


// CONSTRUCTORS
// https://www.youtube.com/watch?v=5z3KEX9AZEQ