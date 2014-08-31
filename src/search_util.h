#pragma once

#include <string>
#include <vector>
#include "search_porting.h"
#include "search_define.h"


bool is_alpha_char(char c);

void string_to_lower(char* str);

void print_binary(char c);

/*
**  �γ̱���-- �䳤����
**/
void variable_byte_encode(std::vector<uint>& arrays ,uchar* buffer ,int* length);

/*
** �γ̽���-- �䳤����
**/
void variable_byte_decode(uchar* buffer, int len ,std::vector<uint>& arrays );

/*
**  ���ݱ���-- �������+�䳤
**/
void compress_data(std::vector<uint>& arrays, uchar* buffer, int* length);

/*
**  ���ݽ���-- �������+�䳤
**/
void decompress_data(uchar* buffer, int len, std::vector<uint>& arrays );


/*
**  �������  -- ��ѹ��
**/
void regular_byte_encode(std::vector<uint>& arrays, uchar* buffer, int* length);


/*
**  ������� --��ѹ��
**/
void regular_byte_decode(uchar* buffer, int len, std::vector<uint>& arrays);



/*
**  ��ȡ����ǰ·��
**/
std::string get_core_path();


int move_file(const char* src_file, const char* dest_file);

int create_file_if_nonexist( const char* path);

int truncate_file( const char* path );
