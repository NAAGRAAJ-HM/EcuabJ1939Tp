/******************************************************************************/
/* File   : J1939Tp.cpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgJ1939Tp.hpp"
#include "J1939Tp_core.hpp"
#include "infJ1939Tp_Exp.hpp"
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
class module_J1939Tp:
      INTERFACES_EXPORTED_J1939TP
      public abstract_module
   ,  public class_J1939Tp_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};
            infPduRClient_Lo        infPduRClient_J1939Tp;

   public:
      module_J1939Tp(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, J1939TP_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, J1939TP_CONFIG_DATA, J1939TP_APPL_CONST) lptrCfgModule
      );
      FUNC(void, J1939TP_CODE) DeInitFunction (void);
      FUNC(void, J1939TP_CODE) MainFunction   (void);
      J1939TP_CORE_FUNCTIONALITIES
};

extern VAR(module_J1939Tp, J1939TP_VAR) J1939Tp;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, J1939TP_VAR, J1939TP_CONST) gptrinfEcuMClient_J1939Tp = &J1939Tp;
CONSTP2VAR(infDcmClient,  J1939TP_VAR, J1939TP_CONST) gptrinfDcmClient_J1939Tp  = &J1939Tp;
CONSTP2VAR(infSchMClient, J1939TP_VAR, J1939TP_CONST) gptrinfSchMClient_J1939Tp = &J1939Tp;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_J1939Tp, J1939TP_VAR) J1939Tp(
   {
         J1939TP_AR_RELEASE_VERSION_MAJOR
      ,  J1939TP_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, J1939TP_CODE) module_J1939Tp::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, J1939TP_CONFIG_DATA, J1939TP_APPL_CONST) lptrCfgModule
){
#if(STD_ON == J1939Tp_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgJ1939Tp;
         }
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

