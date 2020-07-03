#include <atomic>
#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>

using Clock = std::chrono::steady_clock;

constexpr auto Prefix = "[Writer] ";

std::atomic<std::size_t> writtenBytes = 0;

void writeBytes() {
  while (true) {
    std::cout << '0';
    writtenBytes++;
  }
}

int main() {
  std::thread writerThread(writeBytes);
  writerThread.detach();
  std::ofstream outputStream("writer.txt");
  for (int i = 1; i <= 5; i++) {
    std::this_thread::sleep_for(std::chrono::seconds{1});
    outputStream << Prefix << "After " << i << " s, wrote " << writtenBytes << " B to standard output." << std::endl;
  }
}
