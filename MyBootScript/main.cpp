#include <android/log.h>

const char* tag = "MyBootScript";

int main() {
	__android_log_write(ANDROID_LOG_INFO, tag, "Hello! I'm useless script. But I started!");
	__android_log_print(ANDROID_LOG_INFO, tag, "Thank you, bye!");
	return 0;
}
