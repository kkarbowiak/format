#pragma once

#include <string>


auto operator""_fmt(char const * text, long unsigned int)
{
    return [=]{ return std::string(text); };
}
