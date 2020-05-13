#include "celero/Celero.h"

#include <random>
#include <algorithm>

#ifndef WIN32
#include <cmath>
#include <cstdlib>
#endif

///
/// This is the main(int argc, char** argv) for the entire celero program.
/// You can write your own, or use this macro to insert the standard one into the project.
///
CELERO_MAIN

BASELINE(FindMaxBenchTest, Baseline, 100, 100'000 )
{
    celero::DoNotOptimizeAway(std::max(10,2));
}
