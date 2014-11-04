#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main () {

int i = 0;
for (i = 1; i < 10000; i++) {
	sleep(1);
}

return 0;
}

