#pragma once

#include <format>


auto operator""_fmt(char const * text, long unsigned int)
{
    return [=](auto && ... ts)
    {
        return std::vformat(text, std::make_format_args(ts...));
    };
}
