#include "../header/Caesar.h"

Caesar::Caesar()
{
    m_key = 3;
}

Caesar::~Caesar()
{
    m_key = 0;
}

void Caesar::set_key(int key)
{
    m_key = key;
}

int Caesar::get_key() const
{
    return m_key;
}

std::string Caesar::encode(const std::string& text)
{
    int letter_count = 26;
    int upper_let = 65;
    int lower_let = 97;
    std::string result = "";
    int size = text.size();

    for (int i = 0; i < size; ++i)
    {
        if (isupper(text[i]))
        {
            result += char(int(text[i] + m_key - upper_let) % letter_count + upper_let);
        } else 
        {
            result += char(int(text[i] + m_key - lower_let) % letter_count + lower_let);
        } 
    }
    
    return result;
}

std::string Caesar::decode(const std::string& text)
{
    
    int letter_count = 26;
    int upper_let = 65;
    int lower_let = 97;
    std::string result = "";
    int size = text.size();

    for (int i = 0; i < size; ++i)
    {
        if (isupper(text[i]))
        {
            result += char(int(text[i] - m_key - upper_let) % letter_count + upper_let);
        } else
        {
            result += char(int(text[i] - m_key - lower_let) % letter_count + lower_let);
        }
    }

    return result;
    
}