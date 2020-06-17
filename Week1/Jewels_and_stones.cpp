/*
class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
    }
};

#include <iostream>
using namespace std;
int numJewelsInStones(string J, string S)
{
  int count = 0;
  for (int i = 0; i < J.length(); i++)
  {
    for (int j = 0; j < S.length(); j++)
    {
      if (S[i] == J[i])
      {
        count++;
      }
    }
  }
  return count;
}
int main()
{
  string J = "aA";
  string S = "aAAbbbb";
  int a = numJewelsInStones(J,S);
  cout << a << endl;
}
*/
#include <iostream>
using namespace std;

int numJewelsInStones(string J, string S) {
    int count = 0;
    for(int jewel = 0; jewel<J.length(); jewel++){
        for(int stone = 0; stone < S.length(); stone++){
            if(J[jewel] == S[stone]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string J = "aA";
    string S = "aAAbbbb";
    int count = numJewelsInStones(J, S);
    cout << count << endl;
}