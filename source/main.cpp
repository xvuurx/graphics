#include <iostream>
#include "performance.h"

int main(int args, char* argv[])
{

    emt::performance_timer timer{};

    timer.start();

    for(int i =0; i < 100000; i++){

    }

    timer.stop();

    std::cout << "time : " << timer.elapsed() << " ms\n";
    std::cout << "time : " << timer.elapsed_micro() << " µs\n";

    system("pause");
    return 0;
}