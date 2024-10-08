#pragma once
#ifndef GPU_H
#define GPU_H

using namespace std;

class GPU 
{
private:
    const char* model;
public:
    GPU(const char* model_);
    const char* getModel() const;
};

#endif 
