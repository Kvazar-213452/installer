#ifndef FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <windows.h>
#include <shlobj.h>
#include <shobjidl.h>
#include <shlguid.h> 

void convert_header_to_zip(const std::string zip_filename);
void extract_zip(const std::string& zip_filename, const std::string& extract_to);
bool create_shortcut(const std::wstring& target_path, const std::wstring& shortcut_name, const std::wstring& wexe_filename_path);

#endif
