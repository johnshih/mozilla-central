/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Netscape Public License
 * Version 1.0 (the "NPL"); you may not use this file except in
 * compliance with the NPL.  You may obtain a copy of the NPL at
 * http://www.mozilla.org/NPL/
 *
 * Software distributed under the NPL is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the NPL
 * for the specific language governing rights and limitations under the
 * NPL.
 *
 * The Initial Developer of this code under the NPL is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation.  All Rights
 * Reserved.
 */

// ΡΡΡ Security
//#define NADA_VERSION
//#define EXPORT_VERSION
#define US_VERSION

// ΡΡΡ Misc
//#define NO_DBM		// define this to kill DBM
#define NEW_BOOKMARKS
// Enables us to switch profiling from project preferences

// ΡΡΡ Version
//#define ALPHA
//#define BETA
// Comment out both ALPHA and BETA for the final version

// ΡΡΡ Do we have an editor?
// 98-03-10 pchen -- moved into Component_Config.h
// #define EDITOR

// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ
//	₯	You typically will not need to change things below here
// ΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡΡ

#define MOCHA
#define MOZILLA_CLIENT
#ifndef NETSCAPE
#define NETSCAPE
#endif

// #define JAVA 	1

#ifdef JAVA
	#define UNICODE_FONTLIST 1
#endif

#define LAYERS

#define CASTED_READ_OBJECT(stream, type, reference) (reference = NULL)

/* Defined in javaStubs prefix files
#define VERSION_NUMBER "4_0b0"
#define ZIP_NAME "java"##VERSION_NUMBER
*/

// 97/05/05 jrm -- use phil's new search scope api
#define B3_SEARCH_API

