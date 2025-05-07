#include <iostream>
#include <filesystem>
#include <fstream>
#include <unistd.h>

void gc() {
    system("sync && echo 3 > /proc/sys/vm/drop_caches");
    system("rm -rf /data/data/com.termux/files/usr/tmp/*");
}

void init_dirs() {
    std::string root = getenv("HOME") + std::string("/cores/");
    std::filesystem::create_directories(root + "configs");
    std::filesystem::create_directories(root + "logs");
    std::filesystem::create_directories(root + "temp");
    std::ofstream(root + "configs/env.ini") << "[boot]\ninit=1\n";
}

void exec_shell() {
    std::string path = getenv("HOME") + std::string("/exe.sh");
    std::string cmd = "zsh " + path;
    system(cmd.c_str());
}

int main() {
    std::cout << "[summon] Booting..." << std::endl;
    gc();
    init_dirs();
    exec_shell();
    return 0;
}
