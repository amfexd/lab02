#pragma hdrstop
#pragma argsused
#include <dll_lab1.h>
#include <string.h>

// Hello, I'm Ivan Pritchin

extern "C" int _libmain(unsigned long reason)
{
    return 1;
}
extern "C" int __stdcall get_FIO(char* buf)
{
	char fio[] = "Герб Александра Вячеславовна";
	int count = strlen(fio);
	if (buf != NULL) {
		int r = strcpy_s(buf, count+1, fio);
	}
    return count+1;
}
extern "C" int __stdcall get_group_id()
{

}
