#pragma once
#ifndef SSD_H
#define SSD_H

using namespace std;

class SSD {
private:
    int storage;
public:
    SSD(int storage_);
    int getStorage() const;
};

#endif 
