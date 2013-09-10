#ifndef PKCS11_DESCRIBE_H
#define PKCS11_DESCRIBE_H

#include "pkcs11-env.h"
#include <pkcs11.h>

#include <string>

std::string retval_name(CK_RV val);
std::string key_type_name(CK_KEY_TYPE val);
std::string mechanism_type_name(CK_MECHANISM_TYPE val);
std::string certificate_type_name(CK_CERTIFICATE_TYPE val);
std::string object_class_name(CK_OBJECT_CLASS val);
std::string attribute_description(CK_ATTRIBUTE_PTR attr);
std::string info_description(CK_INFO_PTR info);
std::string function_list_description(CK_FUNCTION_LIST_PTR fns);
std::string slot_description(CK_SLOT_INFO* slot);
std::string token_description(CK_TOKEN_INFO_PTR token);
std::string session_info_description(CK_SESSION_INFO_PTR session);
std::string mechanism_info_description(CK_MECHANISM_INFO_PTR mechanism);

#endif  // PKCS11_DESCRIBE_H