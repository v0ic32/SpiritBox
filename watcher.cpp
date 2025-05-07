#include <iostream>
#include <fstream>
#include <string>

void watch_logs() {
    std::ifstream log(std::string(getenv("HOME")) + "/cores/logs/init.log");
    std::string content((std::istreambuf_iterator<char>(log)), std::istreambuf_iterator<char>());
    std::cout << "[watcher] Log contents:\n" << content;
}

int main() {
    watch_logs();
    return 0;
}
