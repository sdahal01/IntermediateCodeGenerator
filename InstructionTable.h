#ifndef InstructionTable_hpp
#define InstructionTable_hpp

#pragma once

#include <stdio.h>
#include <string>
#include <cstring>
#include <stdexcept>
#include <vector>

class InstructionTable {
    
public:
    int address = 0;
    int operand = 0;
    string op = "";
};
#endif 
