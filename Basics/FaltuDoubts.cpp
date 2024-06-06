#include <iostream>
using namespace std;
int main()
{
    int m;
    int a = 5;
    for (float i = 0; i < (m = 5); i++){
        cout << "All correct !!!"<<endl;
    }
    return 0;
} 

// for(int i = 0; i < (int i = 4); i++ )  <-- this is not valid !!!!
//Your code is wrong because you have an invalid syntax for the for loop condition. You cannot declare a variable inside the condition, such as int m = 5. You should either declare it before the loop, or use a constant value instead. Also, you should use semicolons to separate the initialization, condition, and update expressions in the for loop header.