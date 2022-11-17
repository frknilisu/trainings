#include "String.h"
#include <iostream>

int main()
{
    String s0 = "Hello, World!";
    String s1 = s0;            // <-- copy construction
    String s2 = std::move(s0); // <-- move construction

    String s3 = "Goodbye!";
    String s4 = "Foo";
    String s5 = "Bar";

    s4 = s3;            // <-- copy assignment
    s5 = std::move(s3); // <-- move assignment

    std::cout << s1.data() << std::endl;
    std::cout << s2.data() << std::endl;

    std::cout << s4.data() << std::endl;
    std::cout << s5.data() << std::endl;
}
