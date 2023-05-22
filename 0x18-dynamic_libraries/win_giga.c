#include <unistd.h>
#include <string.h>

int rand()
{
	int sm_count = -1;

	sm_count++;
	if (sm_count == 0)
		return 8;
	if (sm_count == 1)
		return 8;
	if (sm_count == 2)
		return 7;
	if (sm_count == 3)
		return 9;
	if (sm_count == 4)
		return 23;
	if (sm_count == 5)
		return 74;
	return sm_count * sm_count % 30000;
}
