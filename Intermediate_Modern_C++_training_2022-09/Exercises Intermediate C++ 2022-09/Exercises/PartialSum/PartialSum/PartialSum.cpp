#include <iostream>
#include <future>
#include <thread>
#include <vector>

int sum(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
    // std::cout << "Hello from thread #" << std::this_thread::get_id() << std::endl;

    int sum = 0;
    for (std::vector<int>::const_iterator it = begin; it != end; ++it)
    {
        sum += *it;
    }

    return sum;
}

int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };

    std::launch policy = std::launch::async;

    std::future<int> result1 = std::async(policy, sum, v.begin(),      v.begin() +  4);
    std::future<int> result2 = std::async(policy, sum, v.begin() +  4, v.begin() +  8);
    std::future<int> result3 = std::async(policy, sum, v.begin() +  8, v.begin() + 12);
    std::future<int> result4 = std::async(policy, sum, v.begin() + 12, v.end());

    int value = result1.get() + result2.get() + result3.get() + result4.get();

    std::cout << "Sum: " << value << std::endl;
}

