#pragma once
/******************************************************************************/
/* File   : EcuabJ1939Tp_Version.hpp                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ECUABJ1939TP_AR_RELEASE_VERSION_MAJOR                                  4
#define ECUABJ1939TP_AR_RELEASE_VERSION_MINOR                                  3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ECUABJ1939TP_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ECUABJ1939TP_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ECUABJ1939TP_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ECUABJ1939TP_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

