#include "format.h"

#include "doctest.h"


TEST_CASE("_fmt is a user-defined string literal")
{
    ""_fmt;
}

TEST_CASE("_fmt is a user-defined string literal of a type that implements function call operator")
{
    ""_fmt();
}
