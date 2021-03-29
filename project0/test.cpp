#include <array>
#include <iostream>
#include <string_view>
#include <tuple>
#include <type_traits>

using namespace std;
 
namespace a::b::c
{
    inline constexpr string_view str{ "hello" };
}
 
template <class... T>
tuple<size_t, common_type_t<T...>> sum(T... args)
{
    return { sizeof...(T), (args + ...) };
}
 
int main()
{
    /*
    Эта программа нужна для тестирования настроек.
    В принципе, тестирование прошло успешно.
    */
    auto [iNumbers, iSum]{ sum(1, 2, 3) };
    cout << a::b::c::str << ' ' << iNumbers << ' ' << iSum << '\n';
 
    array arr{ 1, 2, 3 };
 
    cout << size(arr) << '\n';
 
    return 0;
}