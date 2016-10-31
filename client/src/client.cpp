#include <iostream>
#include <cstdio>
#include "nbind/nbind.h"

struct client
{
    static void init(nbind::cbFunction& send_f)
    {
        send_func = send_f;
    }

    static void on_message(const char* c, size_t size)
    {
        using namespace std;
        fputs("got message: ", stdout);
        for(int i = 0; i < size; ++i)
            putchar(c[i]);
        putchar('\n');
        printf("message size: %u\n", size);
    }

    static void send_message(std::string msg)
    {
        using namespace std;
        cout << "sending message: " << msg << endl;
        send_func(msg);
    }

    static nbind::cbFunction send_func;
};

nbind::cbFunction client::send_func;


NBIND_CLASS(client)
{
    method(init, "init");
    method(on_message, "on_message");
    method(send_message, "send_message");
}
