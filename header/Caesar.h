#pragma once

#include <iostream>
#include <string>
#include <fstream>

class Caesar
{
public:
    Caesar();
    ~Caesar();

public:
    void set_key(int key);
    int get_key() const;
    std::string encode(const std::string& text);
    std::string decode(const std::string& text);
    
private:
    int m_key;
};
