#ifndef  __SEARCH_QUERY_H__
#define __SEARCH_QUERY_H__

#include <set>
#include "search_util.h"

typedef  std::vector<std::pair<uint,int> > PairVec;     /*  */
typedef  std::pair<uint,double>              QueryPair;   /*�ĵ�ID-����ֵ*/

#define g_Query Search_Query::instance()
class Search_Query
{
public:
	static Search_Query& instance()
	{
		static Search_Query instance_;
		return instance_;
	}

	~Search_Query();

	int query(std::string question, std::vector<std::string>& answer);

private:
	Search_Query();

	/*
	** TFIDF�㷨+���Ҷ��� ���ĵ����ƶ�
	**/
	float  get_similarity(PairVec& query_vec, std::set<uint>& doc_list , std::vector<QueryPair>& result_vec );
	int     build_query_vec(std::string& question, PairVec& query_vec);
};


#endif
