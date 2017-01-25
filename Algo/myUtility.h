#pragma once
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<utility>
#include<cmath>
#include<ctime>
#include<vector>
#include<set>
#include<map>
#include<array>
#include<cfloat>
#include<iterator>
#include<list>
#include<cstdio>
#include<chrono>
#include<deque>
#include<stack>
#include<queue>
#include<stdlib.h>
#include<Windows.h>
using namespace std;
// MY TYPES
typedef long long LL;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef vector<float> VF;
typedef pair<int, int> PII;
typedef pair<int, string> PIS;
typedef pair<string, int> PSI;
typedef pair<string, string> PSS;
typedef std::chrono::steady_clock::time_point timePoint;
/////////////////////
// MY MACROS
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORE(i,a,b) for(int i=a;i<=b;i++)
#define BACK(i,a,b) for(int i=a-1;i>=0;i--)
#define ITERALL(i,x) for(int i=0;i<x.size();i++)
#define ITERBACK(i,x) for(int i=x.size()-1;i>=0;i++)
#define VAR(v,n) __typeof(n) v = n
#define SIZE(x) ((int)(x).size())
#define ADD push_back
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define DIV(a,b) ((a%b==0)?true:false)
#define EVEN(a) ((a%2==0)?true:false)
#define DURATION(x,name) std::chrono::duration<x> name
#define NOW std::chrono::steady_clock::now()
#define INSERT make_pair
/////////////////////
// MY DATA STRUCTURES

template<typename T, typename T2, typename T3>
struct triple
{
		T first;
		T2 second;
		T3 third;
		void insert(T xx, T2 yy, T3 zz)
		{
			first = xx;
			second = yy;
			third = zz;
		}
};

template<typename T, typename T2, typename T3, typename T4>
struct quadro
{
	T first;
	T2 second;
	T3 third;
	T4 forth;
	void insert(T xx, T2 yy, T3 zz, T4 zzz)
	{
		first = xx;
		second = yy;
		third = zz;
		forth = zzz;
	}
};

template<typename T, typename T2, typename T3, typename T4, typename T5>
struct penta
{
	T first;
	T2 second;
	T3 third;
	T4 forth;
	T5 fifth;
	void insert(T xx, T2 yy, T3 zz, T4 zzz, T5 zzzz)
	{
		first = xx;
		second = yy;
		third = zz;
		forth = zzz;
		fifth = zzzz;
	}
};

