#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int check_password(const char *);

int main(int argc, char **argv)
{
	char *password = "";
	if (check_password(password)) {
		return true;
	}
}

static int frobcmp(const char *chk, const char *str) {
	int rc = 0;
	size_t len = strlen(str);
	char *s = strdup(str);
	memfrob(s, len);

	/* added code */
	size_t clen = strlen(chk);
	char *c = strdup(chk);
	memfrob(c, clen);
	printf("%s\n", c);
	/* end added code */
	/* Just had to memfrob that crazy value down there! */

	if (strcmp(chk, s) == 0) {
		rc = 1;
	}

	free(s);
	return rc;
}

int check_password(const char *password) {
	return frobcmp("CGCDSE_XGKIBCDOY^OKFCDMSE_XLFKMY", password);
}
