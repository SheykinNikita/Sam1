#include <iostream>

class date {
private:
    int a;
    char b;
    int* po_A;
    char* po_B;
public:
    int geta() {
        return a;
    }

    char getb() {
        return b;
    }

    void seta(int x) {
        a = x;
    }

    void setb(char y) {
        b = y;
    }

   int* getpo_A() {
        po_A = &a;
       return &a;
    }

   char* getpo_B() {
        po_B = &b;
       return &b;
    }
};
int main() {
    date a;
    std::cout<< a.geta() << std::endl;
    std::cout<< a.getb() << std::endl;
    a.seta(5);
    a.setb(6);
    std::cout<< a.getpo_A() << std::endl;
    std::cout<< a.getpo_B() << std::endl;
    return 0;
}