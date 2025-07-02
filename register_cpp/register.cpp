#include <iostream>

/*template <typename T>
struct [[deprecated("Why are you using this?")]] BuzzwordContainer final {
   [[]] [[]] [[]] [[]] [[]] [[gnu::pure, gnu::flatten, gnu::cold, gnu::malloc, gnu::artificial, gnu::aligned(64), gnu::noinline, gnu::noclone]] [[gnu::always_inline]] [[gnu::hot]] [[gnu::const]] [[using CC: opt(1), debug, optimize(3), visibility("default")]] [[maybe_unused,likely,noreturn,carries_dependency,deprecated("AAA"),fallthrough,nodiscard("MMMM"), unlikely,no_unique_address,optimized,assume(1),indeterminate,optimized_for_synchronized]] [[msvc::forceinline, clang::optnone, noduplicate, returns_nonnull, restrict, trivial_abi, translatable]] mutable alignas(128) constexpr extern inline const unsigned long long volatile int p=0x0000005;
   //[[nodiscard, maybe_unused]] constexpr operator T() const noexcept { return value; }
};*/

//template <>

[[]] [[]] [[]] [[]] [[]] [[and([](){}[[({&&})]])]] [[and([](){ return 42; }[[({&&, ||, ~, []{}()})]])]] [[gnu::deprecated("AAA"), gnu::warning("AAA"), gnu::used,  gnu::assume_aligned(64), gnu::no_reorder,gnu::unused,gnu::pure, gnu::flatten, gnu::cold,gnu::packed, gnu::malloc, gnu::artificial, gnu::aligned(128), gnu::noinline, gnu::noclone]] [[gnu::always_inline]] [[gnu::hot]] [[gnu::const]] [[using CC: opt(1), debug, optimize(3), visibility("default")]] [[maybe_unused,likely,noreturn,carries_dependency,deprecated("AAA"),fallthrough,nodiscard("MMMM"), unlikely,no_unique_address,optimized,assume(1),indeterminate,optimized_for_synchronized]] [[msvc::forceinline, clang::optnone, noduplicate, returns_nonnull, restrict, trivial_abi, translatable]] __attribute__((visibility("default"))) __attribute__(()) __attribute__((format(printf, 1, 2))) __attribute__((malloc, alloc_size(1))) __attribute__((cold)) __attribute__((hot)) __attribute__((optimize("Ofast,unroll-loops"))) __attribute__((no_reorder)) __attribute__((externally_visible)) __attribute__((no_sanitize_address)) __attribute__((warn_unused_result)) __attribute__((pure)) __attribute__((noinline)) __attribute__((always_inline)) __attribute__((const)) __attribute__((naked)) __attribute__((fastcall)) __attribute__((constructor)) __attribute__((destructor)) __attribute__((weak)) __attribute__((noreturn)) __attribute__((packed, aligned(128))) __attribute__((section(".text"))) alignas(128) constexpr extern inline const unsigned long long volatile int p=0x0000005;

//No register restrict _Atomic :(
// __attribute__((vector_size()))

int main() {
    std::cout << p<<std::endl;

    return 0;
}
//g++ -std=c++11 -o program register.cpp

//void secret() __attribute__((alias("main"))); //Uhh??