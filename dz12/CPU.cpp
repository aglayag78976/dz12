#include "CPU.h"

CPU::CPU(const char* model_) : model(model_) {}

const char* CPU::getModel() const 
{
    return model;
}
