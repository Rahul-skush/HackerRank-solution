#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct Player {
    int score;
    string name;
};

class Checker{
public:
  	// complete this method
    static int comparator(const Player& a,const Player& b) {
   if(a.score > b.score)
        return 1 ;
        else if(a.score == b.score)
        {
            return(a.name < b.name)?1:-1;
        }
        else 
        return -1 ;
}
};

