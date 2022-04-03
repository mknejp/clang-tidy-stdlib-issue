#include <source_location>

int foo(std::source_location sloc = std::source_location::current()) { return sloc.line(); }

int main()
{
  return foo();
}
