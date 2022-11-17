#include <iostream>

class Duration
{
public:
    constexpr explicit Duration(long s) : seconds(s) {}
    explicit operator long() const { return seconds; }

    constexpr Duration operator + (const Duration& that) const;
private:
    long seconds;
};

constexpr Duration Duration::operator + (const Duration& that) const
{
    return Duration(seconds + that.seconds);
}

constexpr Duration operator "" _s(unsigned long long seconds)
{
    return Duration(seconds);
}

constexpr Duration operator "" _m(unsigned long long minutes)
{
    return Duration(60 * minutes);
}

constexpr Duration operator "" _h(unsigned long long hours)
{
    return Duration(60 * 60 * hours);
}

constexpr Duration operator "" _d(unsigned long long days)
{
    return Duration(24 * 60 * 60 * days);
}

constexpr Duration operator "" _w(unsigned long long weeks)
{
    return Duration(7 * 24 * 60 * 60 * weeks);
}

int main()
{
    Duration d = 1_w + 2_d;

    std::cout << long(d) << " seconds" << std::endl;
}
