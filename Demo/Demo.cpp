#include <iostream>
#include <thread>

//int counter = 0;
std::atomic<int> counter{ 0 };

void increment() {
    for (int i = 0; i < 100000; ++i) {
        // ++counterʵ����3��ָ��
        // 1. int tmp = counter;
        // 2. tmp = tmp + 1;
        // 3. counter = tmp;
        ++counter;
    }
}

int main() {
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << "Counter = " << counter << "\n";

    return 0;
}
