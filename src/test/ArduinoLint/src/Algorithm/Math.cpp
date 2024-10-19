#include <MyLibrary/Algorithm/Math.hpp>

// どこからも呼ばない
__attribute__((unused)) static void Test()
{
   (void)Math::Factorial(123);  // 戻り値は(void)で捨てる
}