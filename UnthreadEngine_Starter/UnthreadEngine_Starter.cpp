#include <iostream>
#include "Mono.h"
#include "Starter.h"
using namespace std;
#undef main
int main()
{
	/*mono_set_assemblies_path("..\\UnthreadEngine_Sharp_Starter\\bin\\Debug");
	mono_set_dirs("..\\Mono\\lib", NULL);
	MonoDomain* domain = mono_jit_init("UnthreadEngine");
	MonoAssembly* assembly = mono_domain_assembly_open(domain, "..\\UnthreadEngine_Sharp_Starter\\bin\\Debug\\UnthreadEngine_Sharp_Starter.exe");
	if (!assembly) throw runtime_error("could not load the given Mono assembly");*/
	/*const auto argc = 6;
	char h = 'h', e = 'e', l = 'l', I = 'I', o = 'o', w = 'w';
	char* argv[argc] = { &h, &e, &l, &I, &o, &w };
	int retVal = mono_jit_exec(domain, assembly, argc, argv);
	mono_jit_cleanup(domain);
	return retVal;*/
	Starter::Start();
	return 0;
}
