#include "main.h"
#include <stdio.h>

int main(void)
{
printf("%d\n", _islower('a')); /* 1 */
printf("%d\n", _islower('z')); /* 1 */
printf("%d\n", _islower('A')); /* 0 */
printf("%d\n", _islower('5')); /* 0 */

return (0);
}
