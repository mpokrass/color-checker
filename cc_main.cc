#include "cc.h"

#include <iostream>

int main(int argc, char* argv[]) {
   Image i("IMG_0291");
   std::cout << i.ColorCheckerLocation() << std::endl;
}
