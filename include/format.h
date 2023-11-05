#pragma once

#include <format>


template<std::size_t N>
struct FormatHelper
{
    char p[N]{};

    constexpr FormatHelper(char const (&pp)[N])
    {
        for (std::size_t i = 0; i < N; ++i)
        {
            p[i] = pp[i];
        }
    }
};
template<FormatHelper fh>
auto operator""_fmt()
{
    return [=](auto && ... ts)
    {
        return std::format(fh.p, ts...);
    };
}
