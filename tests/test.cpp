#include "core.h"

#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

// Write tests

int main(int argc, char* argv[])
{
	int result = Catch::Session().run(argc, argv);

	system("pause");
	return result;
}