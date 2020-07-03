#include <chrono>
#include <iostream>
#include <thread>

constexpr auto Prefix = "[Reader] ";

int main() {
  std::cerr << Prefix << "Sleeping for a while.\n";
  std::this_thread::sleep_for(std::chrono::seconds{15});
  std::cerr << Prefix << "Consuming bytes from standard input.\n";
  char character;
  while (std::cin >> character) {
  }
  std::cerr << Prefix << "Finished reading from standard input.\n";
}
