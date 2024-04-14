/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <memory>
using namespace std;




void invert(uint8_t* ptr, size_t length) {
    for (size_t i = 0; i < length; i++) {
        *ptr ^= 0b10101111;//mask
        ptr++;
    }
}






int main()
{

  


    uint8_t data[] = { 0b1111111, 0b10010101, 0b1001010, 0b1111001 };
    size_t length = sizeof(data) / sizeof(data[0]);

    invert(data, length);

    for (size_t i = 0; i < length; i++) {
        printf("%02x", data[i]);
      //  std::cout << data[i];
    }

    printf("\n");


}