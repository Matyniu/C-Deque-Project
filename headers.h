#include <iostream>
#include <deque>

class Start
{

private:
    std::deque<int>liczba2;
    std::deque<int>n2;
    std::deque<int>a2;
    std::deque<int>b2;
public:
    void wybor();
    void wybor_fibonnaci();
    void wybor_euler();
    void wybor_pitagoras();
    void fibonnaci_dodaj();
    void fibonnaci_oblicz();
    void fibonnaci_shrink();
    void euler_dodaj();
    void euler_oblicz();
    void euler_shrink();
    void pitagoras_dodaj();
    void pitagoras_oblicz();
    void pitagoras_shrink();
    Start(std::deque<int>liczba2,std::deque<int>n2,std::deque<int>a2,std::deque<int>b2);

};

