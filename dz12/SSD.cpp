#include "SSD.h"

SSD::SSD(int storage_) : storage(storage_) {}

int SSD::getStorage() const 
{
    return storage;
}
