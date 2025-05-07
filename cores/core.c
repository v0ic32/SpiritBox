#include <stdio.h>
#include <stdlib.h>

int main() {
    system("sync; echo 3 > /proc/sys/vm/drop_caches");
    system("pm grant com.termux android.permission.WRITE_EXTERNAL_STORAGE");
    printf("[core] Memory cleaned and permissions set.\n");
    return 0;
}
