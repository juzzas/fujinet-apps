/**
 * Network Function Testbed
 */
#include <conio.h>
#include "console.h"
#include "fujinet_network.h"

unsigned char buf[1024];
unsigned char txbuf[64];
unsigned char t=0;

void in(void)
{
    unsigned short l = fujinet_network_read(url, buf, sizeof(buf));

    if (l > 0) {
        for (unsigned short i=0;i<l;i++)
        {
            console_tx(buf[i]);
        }
    }
}

void out(void)
{
    char k;

    k = console_rx_avail();
    if (k > 1) {
        txbuf[0] = console_rx();
        fujinet_network_write(url, txbuf, 1); // send one char.
    }
}

char url[256];
int main(int argc, char **argv)
{
    clrscr();

    cprintf("Welcome to netcat, an example #FujiNet Network Program\nThis is a very simple 80 column terminal program.\n\nAvailable protocols: TCP UDP TELNET HTTP/S TNFS FTP\n\nURL's are of the form:\n\nN:PROTO://host.name:port/path?key=val&key=val\n\nExamples of URL's:\n------------------\nN:TELNET://BBS.FOZZTEXX.NET:23/\nN:HTTPS://www.gnu.org/licenses/gpl-3.0.txt\n\n");

    if (argc == 1) {
        cprintf("Usage: netcat <URL>\n");
        exit(1);
    }

    strcpy(url, argv[1]);

    cprintf("OPEN URL: %s\n", url);
    cprintf("OPEN RETURN: %02X\n", fujinet_network_open(url, 0));

    while(1) {
        in();
        out();
    }
}
