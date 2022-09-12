#include <iostream>
#include <vector>

int main()
{
    float totalCost = 0;
    std::vector<float> prices { 2.5, 4.25, 3.0, 10.0 };
    std::vector<int> items { 1, 1, 0, 3 };

    for (int i = 0; i < items.size(); i++)
    {
        //std::cout << prices[(int)items[i]] << std::endl;
        totalCost += prices[items[i]];
    }

    std::cout << "Total cost of purchases:" << totalCost << std::endl;
}