/**@file libofx_context.hh
 @brief Main state object passed everywhere in the library
 @author (C) 2004 by Benoit Gr�goire
 */
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef CONTEXT_H
#define CONTEXT_H
#include <string.h>
#include <time.h>		// for time_t
#include "libofx.h"
#include "ParserEventGeneratorKit.h"
#include "callback.hh"

using namespace std;
class LibofxContext {
 public:
  LibofxFileFormat current_file_type;
/**
 * Instance of the callback registry
 */
  OfxCallbackRegistry cb_registry;

};//End class LibofxContext




#endif
