#include <iostream>
using namespace std;
// https://chatgpt.com/share/8f6c9bd9-66cb-4558-94e6-15c63576c253
// Default structure with padding
struct DefaultPacked {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};

// Packed structure (using #pragma pack)
#pragma pack(push, 1)
struct CustomPacked {
    char a;  // 1 byte
    int b;   // 4 bytes
    char c;  // 1 byte
};
#pragma pack(pop)

int main() {
    cout << "Size of DefaultPacked: " << sizeof(DefaultPacked) << endl;
    cout << "Size of CustomPacked: " << sizeof(CustomPacked) << endl;
    return 0;
}


// #include <iostream>
// using namespace std;

// // Packed structure using GCC attribute
// struct CustomPackedGCC {
//     char a;  // 1 byte
//     int b;   // 4 bytes
//     char c;  // 1 byte
// } __attribute__((packed));

// int main() {
//     cout << "Size of CustomPackedGCC: " << sizeof(CustomPackedGCC) << endl;
//     return 0;
// }
