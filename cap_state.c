#include <stdio.h>
#include <X11/XKBlib.h>

int main() {
    Display * d = XOpenDisplay((char*)0);
    unsigned n;

    if (d) {
        XkbGetIndicatorState(d, XkbUseCoreKbd, &n);
        printf("%u\n", n); /* (n & 1) ? caps_on : caps_off */
        XCloseDisplay(d);
    } /* else ERR */
    return 0;
}
