#pragma once


void f()
{
}

auto operator""_fmt(char const *, long unsigned int)
{
    return f;
}
