#pragma once

#include <string>


auto operator""_fmt(char const * text, long unsigned int)
{
    return [=](auto && ... ts)
    {
        auto result = std::string(text);

        if constexpr (sizeof...(ts) == 1)
        {
            auto const pos = result.find("{}");
            if (pos != std::string::npos)
            {
                result.replace(pos, 2, ts...);
            }
        }

        return result;
    };
}
