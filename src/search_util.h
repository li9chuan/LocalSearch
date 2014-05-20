#pragma once

#include <string>
#include <hash_map>
#include "search_define.h"


typedef std::hash_map<std::string, int>  StringIntHashMap;


bool is_alpha_char(char c);

void string_to_lower(char* str);

void print_binary(char c);

/*
**  �γ̱���-- �䳤����
**/
void variable_byte_encode(std::vector<uint>& arrays ,uchar** buffer ,int* length);

/*
** �γ̽���-- �䳤����
**/
void variable_byte_decode(uchar* buffer, int len ,std::vector<uint>& arrays );


/*
**  ��ȡ����ǰ·��
**/
std::string get_core_path();
