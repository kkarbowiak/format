#pragma once

#include <string>
#include <format>


auto operator""_fmt(char const * text, long unsigned int)
{
    return [=](auto && ... ts)
    {
        if constexpr (sizeof...(ts) == 0)
        {
            return std::string(text);
        }
        else
        {
            return std::vformat(text, std::make_format_args(ts...));
        }
    };
}
