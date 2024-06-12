/******************************************************************************/
/* File   : EcuabJ1939Tp.cpp                                                  */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "EcuabJ1939Tp.hpp"
#include "infEcuabJ1939Tp_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
VAR(module_EcuabJ1939Tp, ECUABJ1939TP_VAR) EcuabJ1939Tp;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ECUABJ1939TP_CODE) module_EcuabJ1939Tp::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ECUABJ1939TP_CONST,       ECUABJ1939TP_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ECUABJ1939TP_CONFIG_DATA, ECUABJ1939TP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == EcuabJ1939Tp_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == EcuabJ1939Tp_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == EcuabJ1939Tp_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == EcuabJ1939Tp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABJ1939TP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABJ1939TP_CODE) module_EcuabJ1939Tp::DeInitFunction(
   void
){
#if(STD_ON == EcuabJ1939Tp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabJ1939Tp_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == EcuabJ1939Tp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABJ1939TP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABJ1939TP_CODE) module_EcuabJ1939Tp::MainFunction(
   void
){
#if(STD_ON == EcuabJ1939Tp_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == EcuabJ1939Tp_InitCheck)
   }
   else{
#if(STD_ON == EcuabJ1939Tp_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ECUABJ1939TP_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ECUABJ1939TP_CODE) module_EcuabJ1939Tp::dummy(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

