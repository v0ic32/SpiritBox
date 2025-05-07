#include <stdio.h>
#include <stdlib.h>

int main() {
    system("dd if=/dev/zero of=$HOME/swap bs=1M count=512");
    system("mkswap $HOME/swap && swapon $HOME/swap");
    system("rm -rf $HOME/cores/temp/*");
    printf("[memory] Swap activated and temp cleaned.\n");
    return 0;
}
