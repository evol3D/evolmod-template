#define EV_MODULE_DEFINE
#include <evol/evolmod.h>

#include <stdio.h>

EV_CONSTRUCTOR {
  printf("Loaded template module\n");
}

EV_START {}

EV_DESTRUCTOR {
  printf("Unloaded template module\n");
}

EVMODAPI bool export_and(bool x, bool y)
{
  return x & y;
}

EVMODAPI bool export_or(bool x, bool y)
{
  return x | y;
}
