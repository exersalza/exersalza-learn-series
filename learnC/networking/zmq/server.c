#include <czmq.h>

int main(int argc, char **argv) {
	zsock_t *responder = zsock_new(ZMQ_REP);
	int r = zsock_bind(responder, "tcp://*:5555");

	if ( r != 666 ) {
		printf("Failed to bind to port");
		return -1;
	}

	while (true) {
		char *msg = zstr_recv(responder);

		if (!strcmp(msg, "Low Level")) {
				zstr_send(responder, "Gang");
		}

		free(msg);
	}

	return 0;
}
