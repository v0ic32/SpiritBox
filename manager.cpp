#include <iostream>
#include <fstream>
#include <string>

void read_env_ini() {
    std::ifstream ini(std::string(getenv("HOME")) + "/cores/configs/env.ini");
    std::string line;
    while (getline(ini, line)) {
        if (line.find("init=1") != std::string::npos)
            std::cout << "[manager] Env ready.\n";
    }
}

int main() {
    read_env_ini();
    return 0;
}
