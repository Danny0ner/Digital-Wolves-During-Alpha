#ifndef _INTRO_
#define _INTRO_

#include "j1Module.h"

class j1Intro : public j1Module
{
public:

	j1Intro();

	// Destructor
	virtual ~j1Intro();

	// Called before render is available
	bool Awake();

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();
}
#endif _INTRO_