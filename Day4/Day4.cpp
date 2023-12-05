/*Program Challenge 1688*/

class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n>1)
        {
            if(n%2==0)
            {
                sum += n/2;
                n = n/2;
            }
            else
            {
                sum += (n-1)/2;
                n = ((n-1)/2)+1;
            }
        }
        return sum;
    }
};


/*
C++
0 ms
6.2 MB
*/


/*that is one way of solving the question but after i went through the submissions i realised i missed such a big solution that if there are n teams n-1 teams have to be eliminated for 1 team to win*/
/*therefore it means that total matches are just n-1 */

class Solution {
public:
    int numberOfMatches(int n) {
        return n-1;
    }
};

/*
2 ms
6.3 MB*/

/*what i find weird is that this has a worse time and space complexity i want to read more about this*/