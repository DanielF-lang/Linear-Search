#include <iostream>

const char arr[6]{'a', 'b', 'c', 'x', 'y', 'z'};
const char target = 'z';

const int start = 0;
const int end = 5;

int main(void)
{
    for(int i = 0; i < ( sizeof(arr) / sizeof(arr[0]) ); i++)
    {
        if(arr[i] == target)
            std::cout << "Target Found" << std::endl;
    }
}