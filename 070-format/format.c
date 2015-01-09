#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int secret = 0; 

void give_shell(){
	gid_t gid = getegid();
	setresgid(gid, gid, gid);
	system("/bin/sh -i");
}

int main(int argc, char **argv){
	int *ptr = &secret;
//	int secret2 = 99;
//	int *ptr2 = &secret2;
	printf(argv[1]);
//	printf("\n\nAAAAAAAAAAAA%n",ptr2);


	if (secret == 1337){
		printf("WHOA");
		give_shell();
	}
	else
		printf("\n\nsecret: %d", secret);

//	printf("\n\nsecret2: %d", secret2);

	return 0;
}
