#include "RationalNumber.h"


int main() {
    RationalNumber st = RationalNumber<int>();
    RationalNumber st2 = RationalNumber<int>(1, 4, 0);
     RationalNumber st3 = st / st2;
     bool a = st != st2;
    std::cout << a << std::endl;
    return 0;
}
