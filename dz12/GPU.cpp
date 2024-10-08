#include "GPU.h"

GPU::GPU(const char* model_) : model(model_) {}

const char* GPU::getModel() const 
{
    return model;
}
