#include "ll_cycle.h"
#include <stddef.h>

int ll_has_cycle(node *head) {
  node *fastP = head, *slowP = head;
  while (fastP != NULL && fastP->next != NULL) {
    fastP = fastP->next->next;
    slowP = slowP->next;

    if (fastP == slowP)
      return 1;
  }
  return 0;
}
