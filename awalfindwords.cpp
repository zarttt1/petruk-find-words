#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool searcWord (vector<string>&matrix, string word){
int rows = matrix.size();
int cols = matrix[0].size();
transform (word.begin(), word.end(), word.begin(), ::tolower);

for (int i = 0; i < rows; i++){
  for (int j = 0; j <= cols - word.size(); j++){
    string sub = matrix[i].substr(j, word.size());

    transform (sub.begin(), sub.end(), sub.begin(), ::tolower);
      if (sub == word){
          return true;
      }
  }
}


