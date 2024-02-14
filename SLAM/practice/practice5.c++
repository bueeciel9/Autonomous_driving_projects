//while loop


#include <iostream>
#include <vector>

int main(){

std::vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int i = 0;
while (i <vec.size())
{
    i ++;
    if (i ==4)
    {
        continue;
    }
    if (i == 8)
    {
        break;
    }   
    std::cout << vec[i] << std::endl;
}

return 0;


}