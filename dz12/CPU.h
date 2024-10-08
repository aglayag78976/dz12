#pragma once
#ifndef CPU_H
#define CPU_H

using namespace std;

class CPU 
{
private:
    const char* model;
public:
    CPU(const char* model_);
    const char* getModel() const;
};

#endif 
