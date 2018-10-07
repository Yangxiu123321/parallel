#include <stdio.h>
#include <thread>

void hello(void)
{
	printf("hello\r\n");
}

int main(void)
{
	std::thread t(hello);
	t.join();
}