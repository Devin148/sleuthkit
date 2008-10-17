/*
 * The Sleuth Kit
 *
 * Brian Carrier [carrier <at> sleuthkit [dot] org]
 * Copyright (c) 2007 Brian Carrier.  All rights reserved 
 *
 * This software is distributed under the Common Public License 1.0
 */

/** \file  tsk_version.c
 * Contains functions to print and obtain the library version.
 */

#include "tsk_base_i.h"

/**
 * \ingroup baselib
 * Print the library name and version to a handle (such as "The Sleuth Kit ver 1.00").
 * @param hFile Handle to print to
 */
void
tsk_version_print(FILE * hFile)
{
    char *str = "The Sleuth Kit";
#ifdef PACKAGE_VERSION
    tsk_fprintf(hFile, "%s ver %s\n", str, PACKAGE_VERSION);
#else
    tsk_fprintf(hFile, "%s\n", str);
#endif
    return;
}

/**
 * \ingroup baselib
 * Return the library version as a string.
 * @returns String version of version (1.00 for example)
 */
const char *
tsk_version_get_str()
{
#ifdef PACKAGE_VERSION
    return PACKAGE_VERSION;
#else
    return "0.0";
#endif
}