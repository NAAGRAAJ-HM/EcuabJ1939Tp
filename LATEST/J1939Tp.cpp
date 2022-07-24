/******************************************************************************/
/* File   : J1939Tp.cpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "J1939Tp.hpp"
#include "infJ1939Tp_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define J1939TP_AR_RELEASE_VERSION_MAJOR                                       4
#define J1939TP_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(J1939TP_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible J1939TP_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(J1939TP_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible J1939TP_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_J1939Tp, J1939TP_VAR) J1939Tp;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, J1939TP_CODE) module_J1939Tp::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, J1939TP_CONST,       J1939TP_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   J1939TP_CONFIG_DATA, J1939TP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == J1939Tp_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == J1939Tp_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == J1939Tp_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == J1939Tp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  J1939TP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, J1939TP_CODE) module_J1939Tp::DeInitFunction(
   void
){
#if(STD_ON == J1939Tp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == J1939Tp_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == J1939Tp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  J1939TP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, J1939TP_CODE) module_J1939Tp::MainFunction(
   void
){
#if(STD_ON == J1939Tp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == J1939Tp_InitCheck)
   }
   else{
#if(STD_ON == J1939Tp_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  J1939TP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, J1939TP_CODE) module_J1939Tp::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

