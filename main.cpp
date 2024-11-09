#include "utils/common.hpp"
#include "utils/book.hpp"
#include "utils/user.hpp"

int main(void) {
    Book b1 ("123", "Hello Witch", "abcdef", "Jom", "12-12-2012");
    b1.getInfo();
    return 0;
}