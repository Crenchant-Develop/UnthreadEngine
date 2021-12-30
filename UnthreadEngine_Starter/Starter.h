#pragma once
#include <bx/thread.h>
#include <sdl/SDL.h>
#include <bx/bx.h>

class Starter
{
public:
	static void ThreadInit();
	static int ThreadMain(bx::Thread* thread, void* hoge);
	static inline bool SdlSetWindow(SDL_Window* _window);
	static int Start();
	static bx::Thread thread;
	static int counter;
};

