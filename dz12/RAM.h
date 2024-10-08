#pragma once
#ifndef RAM_H
#define RAM_H

using namespace std;

class RAM 
{
private:
    int size;
public:
    RAM(int size_);
    int getSize() const;
};

#endif 
