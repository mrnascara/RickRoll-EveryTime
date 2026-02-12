#include <ti/screen.h>
#include <ti/getcsc.h>
#include <stdlib.h>
#include <ti/getkey.h>
#include <sys/power.h>
/* Main function, called first */

int main(void)
{
    /* Clear the homescreen */
    os_ClrHome();

    /* Print a string */
    os_PutStrFull("never gonna give you up,never gonna let you down,say Goodbye");
uint16_t os_GetKey(void);
    os_ClrHome();
os_PutStrFull("ARE YOU SERIOUS? UGH");
uint16_t os_GetKey(void);
void boot_TurnOff(void);
/* Waits for a key */
    while (!os_GetCSC());

    /* Return 0 for success */
    return 0;
}
