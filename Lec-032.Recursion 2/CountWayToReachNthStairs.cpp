#include <iostream>
using namespace std;

int climbStairs(int n) {
    if(n < 0)
        return 0;
    
    //Only one way to reach the first stair
    //As you are already standing on it
    if(n == 0)
        return 1;

    //You came from the previous stairs
    int penultimate = climbStairs(n-1);

    //You came from the stairs before the previous stairs
    int antepenultimate = climbStairs(n-2);

    return penultimate + antepenultimate;
}

int main() {
    int n;
    cin >> n;

    cout << climbStairs(n) << endl;;

    return 0;
}




/*int countDistinctWays(int nStairs) {
    if(nStairs < 0 )
        return 0;

    if(nStairs == 0)
        return 1;

    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}

int main() {
    int n;
    cin >> n;

    cout << "Number of ways " << countDistinctWays(n);

    return 0;
}*/
