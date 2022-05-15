#include <iostream>
#include "headers.h"


std::deque<int>Fibo;
std::deque<int>Eul;
std::deque<int>A_p;
std::deque<int>B_p;

int main()
{
    Start p1(Fibo,Eul,A_p,B_p);
    p1.wybor();
    return 0;
}
