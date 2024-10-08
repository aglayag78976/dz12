#include "Laptop.h"
#include <iostream>

using namespace std;

int Laptop::count = 0;

Laptop::Laptop(const char* name_, double price_, char color_, const CPU& cpu_, const GPU& gpu_, const RAM& ram_, const SSD& ssd_)
    : name(name_), price(price_), color(color_), cpu(cpu_), gpu(gpu_), ram(ram_), ssd(ssd_) 
{
    count++;
}

int Laptop::getCount() 
{
    return count;
}

void Laptop::displayDetails() const 
{
    cout << "Laptop Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Color: " << color << endl;
    cout << "CPU Model: " << cpu.getModel() << endl;
    cout << "GPU Model: " << gpu.getModel() << endl;
    cout << "RAM Size: " << ram.getSize() << "GB" << endl;
    cout << "SSD Storage: " << ssd.getStorage() << "GB" << endl;
}
