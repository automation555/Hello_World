/* PRQA S 1-9999 ++ */
/* >>>------------------------------------------------------------
 *
 * File: M3CM_Rule-20.13.c
 *
 * Rule-20.13: A line whose first token is # shall be a valid preprocessing
 *             directive
 *
 * Implemented by message(s):
 *   3115   Unrecognized preprocessing directive has been ignored because
 *          of conditional inclusion directives.
 *
 *
 *//* PRQA S 3115 -- *//*
 * <<<------------------------------------------------------------ */



#define N 2

#ifdefn		/* Non-complaint */

extern int rule_2013 (void)
{
  int ret_2013 = 1;

#ifndef N
  ret_2013 = 0;
/* Note misspelling below */
#alse            /* Non-complaint */
  /* This section will be ignored because of the misspelling */
  ret_2013 = N;
#endif

int a=0;

  return ret_2013; /* Still equal to 1 */
}


