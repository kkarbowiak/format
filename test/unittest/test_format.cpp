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

TEST_CASE("The function call operator returns the text of the string literal")
{
    SUBCASE("empty string")
    {
        REQUIRE(""_fmt() == "");
    }

    SUBCASE("non-empty string")
    {
        REQUIRE("text"_fmt() == "text");
    }
}
