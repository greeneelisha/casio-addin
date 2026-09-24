#include <gint/display.h>
#include <gint/keyboard.h>

int main(void)
{
    dclear(C_WHITE);

    dtext(10, 20, "Hello from my Casio!", C_BLACK, C_NONE);
    dtext(10, 40, "My first .g1a add-in", C_BLACK, C_NONE);

    dprint();

    while (1)
    {
        int key = getkey();

        if (key == KEY_EXIT)
            break;
    }

    return 0;
}
