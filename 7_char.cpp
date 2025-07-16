#include <iostream>
#include <cctype>

int main() {
    char c = 'A';  // You can change this to test other characters

    std::cout << "Character: '" << c << "'\n";

    std::cout << "isalpha   : " << (isalpha(c)   ? "Yes" : "No") << '\n';
    std::cout << "isdigit   : " << (isdigit(c)   ? "Yes" : "No") << '\n';
    std::cout << "isalnum   : " << (isalnum(c)   ? "Yes" : "No") << '\n';
    std::cout << "islower   : " << (islower(c)   ? "Yes" : "No") << '\n';
    std::cout << "isupper   : " << (isupper(c)   ? "Yes" : "No") << '\n';
    std::cout << "isspace   : " << (isspace(c)   ? "Yes" : "No") << '\n';
    std::cout << "ispunct   : " << (ispunct(c)   ? "Yes" : "No") << '\n';
    std::cout << "isprint   : " << (isprint(c)   ? "Yes" : "No") << '\n';
    std::cout << "iscntrl   : " << (iscntrl(c)   ? "Yes" : "No") << '\n';
    std::cout << "isxdigit  : " << (isxdigit(c)  ? "Yes" : "No") << '\n';

    std::cout << "tolower   : " << c << " -> " << (char)tolower(c) << '\n';
    std::cout << "toupper   : " << c << " -> " << (char)toupper(c) << '\n';

    return 0;
}
