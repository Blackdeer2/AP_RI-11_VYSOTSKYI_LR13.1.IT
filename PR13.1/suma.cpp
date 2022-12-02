#include <math.h>
#include "dod.h"
#include "suma.h"
#include "var.h"       

using namespace nsDod;
using namespace nsVar;
void nsSum::suma() {
	n = 0;
	a = 1. / x;
	s = a;
	do {
		n++;
		dod();
		s += a;
	} while (fabs(a) > e);
}