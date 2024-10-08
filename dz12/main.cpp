#include <iostream>
#include "Laptop.h"

using namespace std;

int main() 
{
    CPU cpu("Intel Core i7");
    GPU gpu("NVIDIA GTX 1660");
    RAM ram(16);
    SSD ssd(512);

    Laptop laptop1("Laptop1", 1200.99, 'B', cpu, gpu, ram, ssd);
    Laptop laptop2("Laptop2", 1500.49, 'W', cpu, gpu, ram, ssd);

    laptop1.displayDetails();
    laptop2.displayDetails();

    cout << "Total Laptops: " << Laptop::getCount() << endl;

    return 0;
}
