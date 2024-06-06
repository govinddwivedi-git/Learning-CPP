#include <iostream>
using namespace std;

struct Original {
    char a;
    int b;
    char c;
};

struct Reorganized {
    int b;
    char a;
    char c;
};

int main() {
    cout << "Size of Original structure: " << sizeof(Original) << endl;
    cout << "Size of Reorganized structure: " << sizeof(Reorganized) << endl;
    return 0;
}
