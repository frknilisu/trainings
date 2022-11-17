#include <iostream>
#include <list>
#include <map>
#include <mutex>
#include <thread>

static std::mutex counter_mutex;
static int counter = 0;

static std::map<int, int> results;

void count(const std::list<int>& numbers)
{
    for (auto i : numbers)
    {
        if (i == 7)
        {
            std::lock_guard guard(counter_mutex);
            counter++;

            // std::cout << "Thread " << std::this_thread::get_id()  << " found a seven\n";
        }
    }
}

std::list<int> CreateRandomList()
{
    return std::list<int>({ 1, 7, 2, 7, 3, 7, 4, 7, 5, 7, 6, 7, 7, 7 });
}

void test_threads()
{
    std::thread c1(count, CreateRandomList());
    std::thread c2(count, CreateRandomList());
    std::thread c3(count, CreateRandomList());
    std::thread c4(count, CreateRandomList());

    c1.join();
    c2.join();
    c3.join();
    c4.join();

    results[counter]++;
}

int main()
{

    for (int times = 0; times < 100; times++)
    {
        counter = 0;

        test_threads();
    }

    for (auto r : results)
    {
        std::cout << r.first << ": " << r.second << " times" << std::endl;
    }

    return 0;
}
