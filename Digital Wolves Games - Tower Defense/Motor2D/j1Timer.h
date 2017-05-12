#ifndef __j1TIMER_H__
#define __j1TIMER_H__

#include "p2Defs.h"

class j1Timer
{
public:

	// Constructor
	j1Timer();

	void Start();
	uint32 Read() const;
	float ReadSec() const;
	void SetTicks(uint32 ticks);

private:
	uint32	started_at;
};

#endif //__j1TIMER_H__