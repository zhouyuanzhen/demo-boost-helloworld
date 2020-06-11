#include <iostream>
#include <string>
#include <boost/locale.hpp>

int main(void)
{
    boost::locale::generator gen;
    std::locale loc=gen("");
    std::locale::global(loc);
    std::cout.imbue(loc);
    std::string foo = "Yuanzhen Zhou";
    std::string bar = "元真大师👨‍🦲";
    std::cout   <<"Upper:   "<< boost::locale::to_upper(foo)  << std::endl
                <<"Lower:   "<< boost::locale::to_lower(foo)  << std::endl
                <<"Chinese: "<< bar << std::endl;

    return 0;
}
