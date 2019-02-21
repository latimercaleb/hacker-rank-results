// https://www.hackerrank.com/challenges/preprocessor-solution/problem
/* Enter your macros here */

/*#define toStr(a) #a

#define io(v) cin >> v

#define FUNCTION(a,"<") ((a)>(b)?(a):(b))

#define INF 1*/

#define INF (unsigned)!((int)0)
#define FUNCTION(name,operator) inline void name(int &current, int candidate) {!(current operator candidate) ? current = candidate : false;}
#define io(v) cin>>v
#define toStr(str) #str
#define foreach(v, i) for (int i = 0; i < v.size(); ++i)
