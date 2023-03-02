#include <iostream>
#include <thread>

void f1(){
    int a=1;
    while(true){
      a=a*3;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    unsigned int numThreads = std::thread::hardware_concurrency();
    int kacsa;
    std::cout << kacsa << std::endl;
    for(int i=0;i<numThreads-1;i++){
        new std::thread (f1);
    }
    f1();
    return 0;
}
