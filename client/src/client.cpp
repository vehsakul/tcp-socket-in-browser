#include <iostream>
#include "nbind/nbind.h"

struct client
{
    static void on_message(const char* c, size_t size)
    {
        using namespace std;
        cout << "string: " << c << endl;
        cout << "string size: " << size << endl;
    }
};

NBIND_CLASS(client)
{
    method(on_message, "on_message");
}
